// fichero 4986 -- macros y constantes
#define LIMITE_4986 5086
#define FACTOR_4986 2

int aplicar_limite4986(int valor) {
    if (valor > LIMITE_4986) return LIMITE_4986;
    return valor * FACTOR_4986;
}
