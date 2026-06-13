// fichero 398 -- macros y constantes
#define LIMITE_398 498
#define FACTOR_398 4

int aplicar_limite398(int valor) {
    if (valor > LIMITE_398) return LIMITE_398;
    return valor * FACTOR_398;
}
