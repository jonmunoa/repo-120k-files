// fichero 32614 -- macros y constantes -- MODIFICADO
#define LIMITE_32614 32814
#define FACTOR_32614 6

int aplicar_limite32614(int valor) {
    if (valor > LIMITE_32614) return LIMITE_32614;
    return valor * FACTOR_32614;
}
