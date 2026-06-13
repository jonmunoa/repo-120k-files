// fichero 2398 -- macros y constantes
#define LIMITE_2398 2498
#define FACTOR_2398 4

int aplicar_limite2398(int valor) {
    if (valor > LIMITE_2398) return LIMITE_2398;
    return valor * FACTOR_2398;
}
