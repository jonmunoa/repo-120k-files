// fichero 16678 -- macros y constantes
#define LIMITE_16678 16778
#define FACTOR_16678 4

int aplicar_limite16678(int valor) {
    if (valor > LIMITE_16678) return LIMITE_16678;
    return valor * FACTOR_16678;
}
