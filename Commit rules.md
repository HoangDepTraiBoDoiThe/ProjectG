### Commit Message Guidelines

1. **Format**:
   - Use the format: `type: subject`
   - Example: `feat: add user authentication module`

2. **Types**:
   - `feat`: A new feature
   - `fix`: A bug fix
   - `docs`: Documentation only changes
   - `style`: Changes that do not affect the meaning of the code (white-space, formatting, missing semi-colons, etc.)
   - `refactor`: A code change that neither fixes a bug nor adds a feature
   - `perf`: A code change that improves performance
   - `test`: Adding tests or correcting existing tests
   - `chore`: Changes to the build process or auxiliary tools and libraries such as documentation generation

3. **Subject Line**:
   - Use the imperative mood (e.g., "add," "update," "remove").
   - Keep it under 50 characters.
   - Capitalize the first letter.
   - Do not end with a period.

4. **Body** (optional but encouraged):
   - Provide a more detailed description of the change.
   - Use the body to explain **what** and **why** rather than **how**.
   - Wrap lines at 72 characters.

5. **Footer** (optional):
   - Include any relevant issue references (e.g., `Closes #123`, `Related to #456`).

### Commit Practices

1. **Small Commits**:
   - Make small, focused commits. Each commit should ideally represent a single logical change.

2. **Descriptive Messages**:
   - Write clear and descriptive commit messages to help collaborators understand the purpose of changes.

3. **Avoid WIP Commits**:
   - Do not commit work-in-progress changes unless absolutely necessary. Use a temporary branch if needed.

4. **Squash Commits**:
   - When merging branches, consider squashing commits to maintain a clean history. 

5. **Test Before Commit**:
   - Always run tests and ensure the code is working before committing changes.

6. **Review Commits**:
   - Before pushing, review your commits to ensure they follow the established guidelines.

### Branch Naming Conventions

- Use clear and descriptive names for branches:
  - Feature branches: `issue tag/feature/short-description`
  - Bugfix branches: `issue tag/bugfix/short-description`
  - Hotfix branches: `issue tag/hotfix/short-description`
  - Release branches: `issue tag/release/v1.0.0`

### Example Commit Message

``` bash
feat: implement user login functionality

Added the ability for users to log in using their email and password.
- Integrated with the backend authentication service.
- Implemented client-side validation for login form.
- Added unit tests for authentication logic.

Closes #42
```
