// fichero 19258 -- macros y constantes
#define LIMITE_19258 19358
#define FACTOR_19258 4

int aplicar_limite19258(int valor) {
    if (valor > LIMITE_19258) return LIMITE_19258;
    return valor * FACTOR_19258;
}
