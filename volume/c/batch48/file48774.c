// fichero 48774 -- macros y constantes
#define LIMITE_48774 48874
#define FACTOR_48774 5

int aplicar_limite48774(int valor) {
    if (valor > LIMITE_48774) return LIMITE_48774;
    return valor * FACTOR_48774;
}
