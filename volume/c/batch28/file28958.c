// fichero 28958 -- macros y constantes -- MODIFICADO
#define LIMITE_28958 29158
#define FACTOR_28958 5

int aplicar_limite28958(int valor) {
    if (valor > LIMITE_28958) return LIMITE_28958;
    return valor * FACTOR_28958;
}
