// fichero 45398 -- macros y constantes
#define LIMITE_45398 45498
#define FACTOR_45398 4

int aplicar_limite45398(int valor) {
    if (valor > LIMITE_45398) return LIMITE_45398;
    return valor * FACTOR_45398;
}
