// fichero 51258 -- macros y constantes
#define LIMITE_51258 51358
#define FACTOR_51258 4

int aplicar_limite51258(int valor) {
    if (valor > LIMITE_51258) return LIMITE_51258;
    return valor * FACTOR_51258;
}
