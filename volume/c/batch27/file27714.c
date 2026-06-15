// fichero 27714 -- macros y constantes -- MODIFICADO
#define LIMITE_27714 27914
#define FACTOR_27714 6

int aplicar_limite27714(int valor) {
    if (valor > LIMITE_27714) return LIMITE_27714;
    return valor * FACTOR_27714;
}
