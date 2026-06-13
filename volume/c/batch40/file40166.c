// fichero 40166 -- macros y constantes
#define LIMITE_40166 40266
#define FACTOR_40166 2

int aplicar_limite40166(int valor) {
    if (valor > LIMITE_40166) return LIMITE_40166;
    return valor * FACTOR_40166;
}
