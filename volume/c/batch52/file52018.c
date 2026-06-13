// fichero 52018 -- macros y constantes
#define LIMITE_52018 52118
#define FACTOR_52018 4

int aplicar_limite52018(int valor) {
    if (valor > LIMITE_52018) return LIMITE_52018;
    return valor * FACTOR_52018;
}
