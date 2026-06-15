// fichero 20974 -- macros y constantes -- MODIFICADO
#define LIMITE_20974 21174
#define FACTOR_20974 6

int aplicar_limite20974(int valor) {
    if (valor > LIMITE_20974) return LIMITE_20974;
    return valor * FACTOR_20974;
}
