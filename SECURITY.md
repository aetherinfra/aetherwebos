# Security Policy

## Overview

Aether WebOS is an experimental bare-metal operating system under active development.

Security vulnerabilities may exist due to the experimental nature of the kernel,
network stack, and device drivers. Responsible disclosure helps ensure issues
can be investigated and resolved properly.

If you discover a potential security vulnerability, please report it responsibly
instead of publicly disclosing it in issues or discussions.

---

## Supported Versions

At this stage of development, only the latest version of Aether WebOS is
actively maintained.

Older snapshots or archived builds may not receive security updates.

---

## Reporting a Vulnerability

If you believe you have found a security issue, please follow these steps:

1. Do not publicly disclose the vulnerability.
2. Open a **private security report** if available on GitHub.
3. If private reporting is not available, contact the maintainers directly.

Include as much information as possible:

- Description of the vulnerability
- Steps required to reproduce it
- Affected subsystem (networking, drivers, memory, etc.)
- Proof-of-concept if available
- Environment used for testing (QEMU configuration, hardware platform)

This information helps maintainers reproduce and address the issue quickly.

---

## What Happens After Reporting

Once a vulnerability report is received:

- Maintainers will investigate the issue
- The problem will be reproduced and analyzed
- A fix will be developed if confirmed
- Responsible disclosure timelines will be followed where appropriate

Contributors may be credited for responsible vulnerability reports.

---

## Security Scope

Potential security issues may include (but are not limited to):

- memory corruption
- buffer overflows
- unsafe pointer usage
- privilege escalation paths
- network stack vulnerabilities
- malformed packet handling
- driver-related memory access issues

Given the low-level nature of Aether WebOS, careful review of unsafe operations
is particularly valuable.

---

## Development Status

Aether WebOS is a **research and experimental operating system** and should not
currently be considered production secure.

Security review and contributions are highly appreciated as the system evolves.

---

Thank you for helping improve the reliability and safety of Aether WebOS.