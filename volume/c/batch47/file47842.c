// fichero 47842 -- macros y constantes -- MODIFICADO
#define LIMITE_47842 48042
#define FACTOR_47842 4

int aplicar_limite47842(int valor) {
    if (valor > LIMITE_47842) return LIMITE_47842;
    return valor * FACTOR_47842;
}
