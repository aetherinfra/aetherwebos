# Contributing to Aether WebOS

Thank you for your interest in contributing to **Aether WebOS**.

Aether WebOS is a research-oriented bare-metal operating system built from first principles. Contributions from developers interested in operating systems, networking, device drivers, and low-level architecture are highly welcome.

---

## Where to Start

New contributors should begin by checking the **Issues** tab.

The issues page contains tasks ranging from beginner-friendly improvements to advanced kernel architecture work.

Look for labels such as:

- `good first issue` – suitable for new contributors
- `help wanted` – areas where help is actively needed
- `drivers` – hardware driver development
- `networking` – TCP/IP stack improvements
- `kernel` – core kernel architecture work

Issues often contain additional context about the subsystem and suggested implementation areas.

---

## Contribution Workflow

1. **Fork the repository**
2. **Create a new branch** for your change
3. Implement your changes
4. Submit a **Pull Request** to the `main` branch

Example workflow:

```bash
git fork https://github.com/aetherinfra/aetherwebos
git checkout -b feature/my-change
```
Commit your changes:

```bash
git commit -m "[ADD] Add PS/2 keyboard driver initialization"
```

Push your branch and open a Pull Request.

--- 

## Code Guidelines

Aether WebOS aims to keep the codebase simple and readable.

### General guidelines:

- Use C (freestanding) only
- Do not introduce external libraries
- Maintain the existing subsystem structure
- Prefer clear and simple implementations over clever ones
- Avoid unnecessary abstraction
- If you are unsure about an architectural change, open an issue to discuss it first.

### Commit Guidelines:

- Standard Header Format: Use the required prefix: [KEYWORD] Commit Description.
    - [ADD]: New features, drivers, or modules.
    - [FIX]: Bug fixes or logic corrections.
    - [UPDATE]: Refactoring, optimization, or documentation changes.
    - [REMOVE]: Deprecating or deleting code/assets.

- Atomic Commits: Keep commits small and focused. Do not mix a [FIX] for a memory leak with an [ADD] for a new UI component in the same commit.
- Imperative Mood: Write the description as a command to the codebase (e.g., use [ADD] Initialize UART instead of [ADD] Added UART initialization).
- Specify Scope: Whenever possible, mention the layer being touched.
    - Example: [ADD] kernel/mm: Implement heap allocator
    - Example: [FIX] webui/css: Fix navbar overflow on mobile
- Build-Check Rule: Never commit code that doesn't compile. If a feature is halfway done but breaks the build, keep it in a local branch.
- Descriptive, Not Vague: Avoid generic messages like [UPDATE] internal changes or [FIX] bugs. If a recruiter looks at your repo, the commit history should read like a professional roadmap.

### Areas Where Contributions Are Welcome

Current areas of interest include:

- Device drivers (USB, PS/2, storage, input)
- TCP/IP stack improvements
- Kernel memory management improvements
- Interrupt handling improvements
- ARM architecture support
- Debugging and tracing tools
- Documentation
- Reporting Bugs

If you discover a bug:
- Open a new issue
- Describe the problem clearly
- Include steps to reproduce if possible
- Provide logs or console output when available

### Feature Requests

Feature ideas are welcome.

Please open an issue describing:
- the motivation
- the expected behavior
- possible implementation direction
- This allows discussion before implementation.

### Development Philosophy

Aether WebOS follows a few core principles:

- Build systems from first principles
- Maintain clean subsystem boundaries
- Keep the architecture simple and understandable
- Avoid unnecessary dependencies
- Encourage experimentation and learning

This project is intended as a systems research platform, and thoughtful experimentation is encouraged.

### Note:
All source files contain a standard header describing origin and
maintainers. Please update the header only when making significant
changes to a file.
---

### Thank You

Every contribution — from bug fixes to new drivers — helps move the project forward.

If you're interested in operating systems, networking stacks, or low-level architecture, you're in the right place.

**Welcome to Aether WebOS.**