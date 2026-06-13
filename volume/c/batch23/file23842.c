// fichero 23842 -- macros y constantes
#define LIMITE_23842 23942
#define FACTOR_23842 3

int aplicar_limite23842(int valor) {
    if (valor > LIMITE_23842) return LIMITE_23842;
    return valor * FACTOR_23842;
}
