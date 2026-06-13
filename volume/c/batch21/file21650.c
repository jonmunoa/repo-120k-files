// fichero 21650 -- macros y constantes
#define LIMITE_21650 21750
#define FACTOR_21650 1

int aplicar_limite21650(int valor) {
    if (valor > LIMITE_21650) return LIMITE_21650;
    return valor * FACTOR_21650;
}
