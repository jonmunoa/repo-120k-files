// fichero 13770 -- macros y constantes
#define LIMITE_13770 13870
#define FACTOR_13770 1

int aplicar_limite13770(int valor) {
    if (valor > LIMITE_13770) return LIMITE_13770;
    return valor * FACTOR_13770;
}
