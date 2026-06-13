// fichero 13650 -- macros y constantes
#define LIMITE_13650 13750
#define FACTOR_13650 1

int aplicar_limite13650(int valor) {
    if (valor > LIMITE_13650) return LIMITE_13650;
    return valor * FACTOR_13650;
}
