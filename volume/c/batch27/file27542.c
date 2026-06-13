// fichero 27542 -- macros y constantes
#define LIMITE_27542 27642
#define FACTOR_27542 3

int aplicar_limite27542(int valor) {
    if (valor > LIMITE_27542) return LIMITE_27542;
    return valor * FACTOR_27542;
}
