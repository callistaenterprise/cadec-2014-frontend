package frontend.web.controller;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class AdministrationController {

	@RequestMapping("/administration")
	public String index(Model model) {
		return "administration/index";
	}
}