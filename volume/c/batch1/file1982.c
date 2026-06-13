// fichero 1982 -- macros y constantes
#define LIMITE_1982 2082
#define FACTOR_1982 3

int aplicar_limite1982(int valor) {
    if (valor > LIMITE_1982) return LIMITE_1982;
    return valor * FACTOR_1982;
}
