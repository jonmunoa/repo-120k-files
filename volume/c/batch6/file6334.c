// fichero 6334 -- macros y constantes
#define LIMITE_6334 6434
#define FACTOR_6334 5

int aplicar_limite6334(int valor) {
    if (valor > LIMITE_6334) return LIMITE_6334;
    return valor * FACTOR_6334;
}
