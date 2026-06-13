// fichero 14650 -- macros y constantes
#define LIMITE_14650 14750
#define FACTOR_14650 1

int aplicar_limite14650(int valor) {
    if (valor > LIMITE_14650) return LIMITE_14650;
    return valor * FACTOR_14650;
}
