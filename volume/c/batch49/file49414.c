// fichero 49414 -- macros y constantes -- MODIFICADO
#define LIMITE_49414 49614
#define FACTOR_49414 6

int aplicar_limite49414(int valor) {
    if (valor > LIMITE_49414) return LIMITE_49414;
    return valor * FACTOR_49414;
}
