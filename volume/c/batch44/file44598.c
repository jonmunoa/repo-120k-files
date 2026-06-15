// fichero 44598 -- macros y constantes -- MODIFICADO
#define LIMITE_44598 44798
#define FACTOR_44598 5

int aplicar_limite44598(int valor) {
    if (valor > LIMITE_44598) return LIMITE_44598;
    return valor * FACTOR_44598;
}
