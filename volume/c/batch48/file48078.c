// fichero 48078 -- macros y constantes
#define LIMITE_48078 48178
#define FACTOR_48078 4

int aplicar_limite48078(int valor) {
    if (valor > LIMITE_48078) return LIMITE_48078;
    return valor * FACTOR_48078;
}
