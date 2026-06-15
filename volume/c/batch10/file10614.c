// fichero 10614 -- macros y constantes -- MODIFICADO
#define LIMITE_10614 10814
#define FACTOR_10614 6

int aplicar_limite10614(int valor) {
    if (valor > LIMITE_10614) return LIMITE_10614;
    return valor * FACTOR_10614;
}
