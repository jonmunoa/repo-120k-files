// fichero 31830 -- macros y constantes
#define LIMITE_31830 31930
#define FACTOR_31830 1

int aplicar_limite31830(int valor) {
    if (valor > LIMITE_31830) return LIMITE_31830;
    return valor * FACTOR_31830;
}
