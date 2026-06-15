// fichero 28426 -- macros y constantes -- MODIFICADO
#define LIMITE_28426 28626
#define FACTOR_28426 3

int aplicar_limite28426(int valor) {
    if (valor > LIMITE_28426) return LIMITE_28426;
    return valor * FACTOR_28426;
}
