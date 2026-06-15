// fichero 10170 -- macros y constantes -- MODIFICADO
#define LIMITE_10170 10370
#define FACTOR_10170 2

int aplicar_limite10170(int valor) {
    if (valor > LIMITE_10170) return LIMITE_10170;
    return valor * FACTOR_10170;
}
