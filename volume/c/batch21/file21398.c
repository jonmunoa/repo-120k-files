// fichero 21398 -- macros y constantes
#define LIMITE_21398 21498
#define FACTOR_21398 4

int aplicar_limite21398(int valor) {
    if (valor > LIMITE_21398) return LIMITE_21398;
    return valor * FACTOR_21398;
}
