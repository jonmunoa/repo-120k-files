// fichero 48118 -- macros y constantes
#define LIMITE_48118 48218
#define FACTOR_48118 4

int aplicar_limite48118(int valor) {
    if (valor > LIMITE_48118) return LIMITE_48118;
    return valor * FACTOR_48118;
}
