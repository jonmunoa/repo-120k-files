// fichero 28842 -- macros y constantes -- MODIFICADO
#define LIMITE_28842 29042
#define FACTOR_28842 4

int aplicar_limite28842(int valor) {
    if (valor > LIMITE_28842) return LIMITE_28842;
    return valor * FACTOR_28842;
}
