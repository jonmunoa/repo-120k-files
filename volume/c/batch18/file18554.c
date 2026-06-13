// fichero 18554 -- macros y constantes
#define LIMITE_18554 18654
#define FACTOR_18554 5

int aplicar_limite18554(int valor) {
    if (valor > LIMITE_18554) return LIMITE_18554;
    return valor * FACTOR_18554;
}
