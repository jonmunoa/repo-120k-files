// fichero 31782 -- macros y constantes
#define LIMITE_31782 31882
#define FACTOR_31782 3

int aplicar_limite31782(int valor) {
    if (valor > LIMITE_31782) return LIMITE_31782;
    return valor * FACTOR_31782;
}
