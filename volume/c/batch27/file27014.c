// fichero 27014 -- macros y constantes
#define LIMITE_27014 27114
#define FACTOR_27014 5

int aplicar_limite27014(int valor) {
    if (valor > LIMITE_27014) return LIMITE_27014;
    return valor * FACTOR_27014;
}
