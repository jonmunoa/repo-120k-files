// fichero 6554 -- macros y constantes
#define LIMITE_6554 6654
#define FACTOR_6554 5

int aplicar_limite6554(int valor) {
    if (valor > LIMITE_6554) return LIMITE_6554;
    return valor * FACTOR_6554;
}
