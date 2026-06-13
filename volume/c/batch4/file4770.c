// fichero 4770 -- macros y constantes
#define LIMITE_4770 4870
#define FACTOR_4770 1

int aplicar_limite4770(int valor) {
    if (valor > LIMITE_4770) return LIMITE_4770;
    return valor * FACTOR_4770;
}
