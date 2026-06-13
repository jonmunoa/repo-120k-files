// fichero 27754 -- macros y constantes
#define LIMITE_27754 27854
#define FACTOR_27754 5

int aplicar_limite27754(int valor) {
    if (valor > LIMITE_27754) return LIMITE_27754;
    return valor * FACTOR_27754;
}
