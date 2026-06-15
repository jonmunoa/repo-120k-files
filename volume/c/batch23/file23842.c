// fichero 23842 -- macros y constantes -- MODIFICADO
#define LIMITE_23842 24042
#define FACTOR_23842 4

int aplicar_limite23842(int valor) {
    if (valor > LIMITE_23842) return LIMITE_23842;
    return valor * FACTOR_23842;
}
