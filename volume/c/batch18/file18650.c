// fichero 18650 -- macros y constantes
#define LIMITE_18650 18750
#define FACTOR_18650 1

int aplicar_limite18650(int valor) {
    if (valor > LIMITE_18650) return LIMITE_18650;
    return valor * FACTOR_18650;
}
