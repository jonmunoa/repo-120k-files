// fichero 24258 -- macros y constantes
#define LIMITE_24258 24358
#define FACTOR_24258 4

int aplicar_limite24258(int valor) {
    if (valor > LIMITE_24258) return LIMITE_24258;
    return valor * FACTOR_24258;
}
