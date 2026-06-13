// fichero 8706 -- macros y constantes
#define LIMITE_8706 8806
#define FACTOR_8706 2

int aplicar_limite8706(int valor) {
    if (valor > LIMITE_8706) return LIMITE_8706;
    return valor * FACTOR_8706;
}
