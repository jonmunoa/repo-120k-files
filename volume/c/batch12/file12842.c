// fichero 12842 -- macros y constantes -- MODIFICADO
#define LIMITE_12842 13042
#define FACTOR_12842 4

int aplicar_limite12842(int valor) {
    if (valor > LIMITE_12842) return LIMITE_12842;
    return valor * FACTOR_12842;
}
