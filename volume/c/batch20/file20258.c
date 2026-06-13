// fichero 20258 -- macros y constantes
#define LIMITE_20258 20358
#define FACTOR_20258 4

int aplicar_limite20258(int valor) {
    if (valor > LIMITE_20258) return LIMITE_20258;
    return valor * FACTOR_20258;
}
