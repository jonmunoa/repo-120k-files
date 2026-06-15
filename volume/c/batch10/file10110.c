// fichero 10110 -- macros y constantes -- MODIFICADO
#define LIMITE_10110 10310
#define FACTOR_10110 2

int aplicar_limite10110(int valor) {
    if (valor > LIMITE_10110) return LIMITE_10110;
    return valor * FACTOR_10110;
}
