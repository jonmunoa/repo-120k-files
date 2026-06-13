// fichero 8358 -- macros y constantes
#define LIMITE_8358 8458
#define FACTOR_8358 4

int aplicar_limite8358(int valor) {
    if (valor > LIMITE_8358) return LIMITE_8358;
    return valor * FACTOR_8358;
}
