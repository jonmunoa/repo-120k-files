// fichero 35478 -- macros y constantes
#define LIMITE_35478 35578
#define FACTOR_35478 4

int aplicar_limite35478(int valor) {
    if (valor > LIMITE_35478) return LIMITE_35478;
    return valor * FACTOR_35478;
}
