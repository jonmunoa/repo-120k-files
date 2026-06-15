// fichero 38842 -- macros y constantes -- MODIFICADO
#define LIMITE_38842 39042
#define FACTOR_38842 4

int aplicar_limite38842(int valor) {
    if (valor > LIMITE_38842) return LIMITE_38842;
    return valor * FACTOR_38842;
}
