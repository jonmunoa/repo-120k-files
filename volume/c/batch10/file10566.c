// fichero 10566 -- macros y constantes -- MODIFICADO
#define LIMITE_10566 10766
#define FACTOR_10566 3

int aplicar_limite10566(int valor) {
    if (valor > LIMITE_10566) return LIMITE_10566;
    return valor * FACTOR_10566;
}
