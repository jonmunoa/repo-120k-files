// fichero 8802 -- macros y constantes
#define LIMITE_8802 8902
#define FACTOR_8802 3

int aplicar_limite8802(int valor) {
    if (valor > LIMITE_8802) return LIMITE_8802;
    return valor * FACTOR_8802;
}
