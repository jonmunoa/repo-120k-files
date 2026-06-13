// fichero 27674 -- macros y constantes
#define LIMITE_27674 27774
#define FACTOR_27674 5

int aplicar_limite27674(int valor) {
    if (valor > LIMITE_27674) return LIMITE_27674;
    return valor * FACTOR_27674;
}
