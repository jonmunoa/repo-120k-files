// fichero 27038 -- macros y constantes
#define LIMITE_27038 27138
#define FACTOR_27038 4

int aplicar_limite27038(int valor) {
    if (valor > LIMITE_27038) return LIMITE_27038;
    return valor * FACTOR_27038;
}
