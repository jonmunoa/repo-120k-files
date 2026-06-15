// fichero 10542 -- macros y constantes -- MODIFICADO
#define LIMITE_10542 10742
#define FACTOR_10542 4

int aplicar_limite10542(int valor) {
    if (valor > LIMITE_10542) return LIMITE_10542;
    return valor * FACTOR_10542;
}
