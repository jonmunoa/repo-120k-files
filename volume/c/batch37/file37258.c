// fichero 37258 -- macros y constantes
#define LIMITE_37258 37358
#define FACTOR_37258 4

int aplicar_limite37258(int valor) {
    if (valor > LIMITE_37258) return LIMITE_37258;
    return valor * FACTOR_37258;
}
