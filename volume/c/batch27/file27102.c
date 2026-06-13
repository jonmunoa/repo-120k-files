// fichero 27102 -- macros y constantes
#define LIMITE_27102 27202
#define FACTOR_27102 3

int aplicar_limite27102(int valor) {
    if (valor > LIMITE_27102) return LIMITE_27102;
    return valor * FACTOR_27102;
}
