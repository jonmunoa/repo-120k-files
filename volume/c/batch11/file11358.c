// fichero 11358 -- macros y constantes
#define LIMITE_11358 11458
#define FACTOR_11358 4

int aplicar_limite11358(int valor) {
    if (valor > LIMITE_11358) return LIMITE_11358;
    return valor * FACTOR_11358;
}
