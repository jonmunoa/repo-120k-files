// fichero 27862 -- macros y constantes
#define LIMITE_27862 27962
#define FACTOR_27862 3

int aplicar_limite27862(int valor) {
    if (valor > LIMITE_27862) return LIMITE_27862;
    return valor * FACTOR_27862;
}
