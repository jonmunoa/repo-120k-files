// fichero 27350 -- macros y constantes
#define LIMITE_27350 27450
#define FACTOR_27350 1

int aplicar_limite27350(int valor) {
    if (valor > LIMITE_27350) return LIMITE_27350;
    return valor * FACTOR_27350;
}
