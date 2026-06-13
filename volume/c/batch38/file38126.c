// fichero 38126 -- macros y constantes
#define LIMITE_38126 38226
#define FACTOR_38126 2

int aplicar_limite38126(int valor) {
    if (valor > LIMITE_38126) return LIMITE_38126;
    return valor * FACTOR_38126;
}
