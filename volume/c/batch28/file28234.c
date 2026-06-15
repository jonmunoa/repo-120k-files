// fichero 28234 -- macros y constantes -- MODIFICADO
#define LIMITE_28234 28434
#define FACTOR_28234 6

int aplicar_limite28234(int valor) {
    if (valor > LIMITE_28234) return LIMITE_28234;
    return valor * FACTOR_28234;
}
