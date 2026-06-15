// fichero 30842 -- macros y constantes -- MODIFICADO
#define LIMITE_30842 31042
#define FACTOR_30842 4

int aplicar_limite30842(int valor) {
    if (valor > LIMITE_30842) return LIMITE_30842;
    return valor * FACTOR_30842;
}
