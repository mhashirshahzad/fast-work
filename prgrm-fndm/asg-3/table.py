 Colors
 CYAN    = "\033[96m"
 YELLOW  = "\033[93m"
 GREEN   = "\033[92m"
 RED     = "\033[91m"
 MAGENTA = "\033[95m"
 BLUE    = "\033[94m"
 WHITE   = "\033[97m"
 DIM     = "\033[2m"
 BOLD    = "\033[1m"
 RESET   = "\033[0m"

 # Header
 print(f"{BOLD}{CYAN}┌{'─'*84}┐{RESET}")
 print(f"{CYAN}│{RESET} {BOLD}{YELLOW}{'n':>7}{RESET} {CYAN}│{RESET} {BOLD}{YELLOW}{'digits':^15}{RESET} {CYAN}│{RESET} {BOLD}{YELLOW}{'new N':^11}{RESET} {CYAN}│{RESET} {BOLD}{YELLOW}{'prev Numbers':^20}{RESET} {CYAN}│{RESET} {BOLD}{YELLOW}{'Did Appear before':^17}{RESET} {CYAN}│{RESET}")
 print(f"{CYAN}│{'─'*9}│{'─'*17}│{'─'*13}│{'─'*22}│{'─'*19}│{RESET}")

 rows = [
     ("4",   "4^2",              "16",  "4",                      "No"),
     ("16",  "1^2 + 6^2",        "37",  "4 16",                   "No"),
     ("37",  "3^2 + 7^2",        "58",  "4 16 37",                "No"),
     ("58",  "5^2 + 8^2",        "89",  "4 16 37 58",             "No"),
     ("89",  "8^2 + 9^2",        "145", "4 16 37 58 89",          "No"),
     ("145", "1^2 + 4^2 + 5^2",  "42",  "4 16 37 58 89 145",      "No"),
     ("42",  "4^2 + 2^2",        "20",  "4 16 37 58 89 145 20",   "No"),
     ("20",  "2^2 + 0^2",        "4",   "4 16 37 58 89 145 20",   "Yes"),
 ]

 for n, digits, new_n, prev, appeared in rows:
     a_color = RED if appeared == "Yes" else GREEN
     print(f"{CYAN}│{RESET} {BOLD}{WHITE}{n:>7}{RESET} {CYAN}│{RESET} {BLUE}{digits:^15}{RESET} {CYAN}│{RESET} {BOLD}{MAGENTA}{new_n:^11}{RESET} {CYAN}│{RESET} {DIM}{prev:^20}{RESET} {CYAN}│{RESET} {BOLD}{a_color}{appeared:^17}{RESET} {CYAN}│{RESET}")

 print(f"{CYAN}└{'─'*84}┘{RESET}")")"))")")]"]"]"]"]"]"]"]"]"]"
