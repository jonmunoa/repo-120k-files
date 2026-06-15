// fichero 27754 -- macros y constantes -- MODIFICADO
#define LIMITE_27754 27954
#define FACTOR_27754 6

int aplicar_limite27754(int valor) {
    if (valor > LIMITE_27754) return LIMITE_27754;
    return valor * FACTOR_27754;
}
