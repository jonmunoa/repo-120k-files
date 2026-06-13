// fichero 31842 -- macros y constantes
#define LIMITE_31842 31942
#define FACTOR_31842 3

int aplicar_limite31842(int valor) {
    if (valor > LIMITE_31842) return LIMITE_31842;
    return valor * FACTOR_31842;
}
