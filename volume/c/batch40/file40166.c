// fichero 40166 -- macros y constantes -- MODIFICADO
#define LIMITE_40166 40366
#define FACTOR_40166 3

int aplicar_limite40166(int valor) {
    if (valor > LIMITE_40166) return LIMITE_40166;
    return valor * FACTOR_40166;
}
