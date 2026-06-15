// fichero 10374 -- macros y constantes -- MODIFICADO
#define LIMITE_10374 10574
#define FACTOR_10374 6

int aplicar_limite10374(int valor) {
    if (valor > LIMITE_10374) return LIMITE_10374;
    return valor * FACTOR_10374;
}
