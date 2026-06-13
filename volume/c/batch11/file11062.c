// fichero 11062 -- macros y constantes
#define LIMITE_11062 11162
#define FACTOR_11062 3

int aplicar_limite11062(int valor) {
    if (valor > LIMITE_11062) return LIMITE_11062;
    return valor * FACTOR_11062;
}
