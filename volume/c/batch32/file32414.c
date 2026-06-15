// fichero 32414 -- macros y constantes -- MODIFICADO
#define LIMITE_32414 32614
#define FACTOR_32414 6

int aplicar_limite32414(int valor) {
    if (valor > LIMITE_32414) return LIMITE_32414;
    return valor * FACTOR_32414;
}
