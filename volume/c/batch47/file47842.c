// fichero 47842 -- macros y constantes
#define LIMITE_47842 47942
#define FACTOR_47842 3

int aplicar_limite47842(int valor) {
    if (valor > LIMITE_47842) return LIMITE_47842;
    return valor * FACTOR_47842;
}
