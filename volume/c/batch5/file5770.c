// fichero 5770 -- macros y constantes
#define LIMITE_5770 5870
#define FACTOR_5770 1

int aplicar_limite5770(int valor) {
    if (valor > LIMITE_5770) return LIMITE_5770;
    return valor * FACTOR_5770;
}
