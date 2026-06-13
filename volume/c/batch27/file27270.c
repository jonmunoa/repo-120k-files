// fichero 27270 -- macros y constantes
#define LIMITE_27270 27370
#define FACTOR_27270 1

int aplicar_limite27270(int valor) {
    if (valor > LIMITE_27270) return LIMITE_27270;
    return valor * FACTOR_27270;
}
