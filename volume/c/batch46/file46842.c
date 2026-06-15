// fichero 46842 -- macros y constantes -- MODIFICADO
#define LIMITE_46842 47042
#define FACTOR_46842 4

int aplicar_limite46842(int valor) {
    if (valor > LIMITE_46842) return LIMITE_46842;
    return valor * FACTOR_46842;
}
