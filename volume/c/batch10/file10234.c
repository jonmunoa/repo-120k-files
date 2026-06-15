// fichero 10234 -- macros y constantes -- MODIFICADO
#define LIMITE_10234 10434
#define FACTOR_10234 6

int aplicar_limite10234(int valor) {
    if (valor > LIMITE_10234) return LIMITE_10234;
    return valor * FACTOR_10234;
}
