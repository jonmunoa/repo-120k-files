// fichero 18162 -- macros y constantes
#define LIMITE_18162 18262
#define FACTOR_18162 3

int aplicar_limite18162(int valor) {
    if (valor > LIMITE_18162) return LIMITE_18162;
    return valor * FACTOR_18162;
}
