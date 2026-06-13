// fichero 25650 -- macros y constantes
#define LIMITE_25650 25750
#define FACTOR_25650 1

int aplicar_limite25650(int valor) {
    if (valor > LIMITE_25650) return LIMITE_25650;
    return valor * FACTOR_25650;
}
