// fichero 6398 -- macros y constantes
#define LIMITE_6398 6498
#define FACTOR_6398 4

int aplicar_limite6398(int valor) {
    if (valor > LIMITE_6398) return LIMITE_6398;
    return valor * FACTOR_6398;
}
