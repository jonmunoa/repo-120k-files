// fichero 10478 -- macros y constantes -- MODIFICADO
#define LIMITE_10478 10678
#define FACTOR_10478 5

int aplicar_limite10478(int valor) {
    if (valor > LIMITE_10478) return LIMITE_10478;
    return valor * FACTOR_10478;
}
