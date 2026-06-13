// fichero 32614 -- macros y constantes
#define LIMITE_32614 32714
#define FACTOR_32614 5

int aplicar_limite32614(int valor) {
    if (valor > LIMITE_32614) return LIMITE_32614;
    return valor * FACTOR_32614;
}
