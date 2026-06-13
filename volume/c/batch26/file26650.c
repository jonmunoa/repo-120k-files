// fichero 26650 -- macros y constantes
#define LIMITE_26650 26750
#define FACTOR_26650 1

int aplicar_limite26650(int valor) {
    if (valor > LIMITE_26650) return LIMITE_26650;
    return valor * FACTOR_26650;
}
