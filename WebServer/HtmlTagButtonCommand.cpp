/*
RailControl - Model Railway Control Software

Copyright (c) 2017-2022 Dominik (Teddy) Mahrer - www.railcontrol.org

RailControl is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

RailControl is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RailControl; see the file LICENCE. If not see
<http://www.gnu.org/licenses/>.
*/

#include <sstream>

#include "Utils/Utils.h"
#include "WebServer/HtmlTagButtonCommand.h"

namespace WebServer
{
	HtmlTagButtonCommand::HtmlTagButtonCommand(const std::string& value,
		const std::string& command,
		const std::map<std::string,std::string>& arguments,
		const std::string& tooltip,
		const std::string& additionalOnClick)
	:	HtmlTagButton(value, command, tooltip)
	{
		std::string cmd = Utils::Utils::StringBeforeDelimiter(command, "_");
		std::stringstream ss;
		ss <<
			"var theUrl = '/?cmd=" << cmd;
		for (auto& argument : arguments) {

			ss << "&" << argument.first << "=" << argument.second;
		}
		ss <<"';"
			"fireRequestAndForget(theUrl);";
		ss << additionalOnClick;
		ss << "return false;";
		AddAttribute("onclick", ss.str());
	}
} // namespace WebServer