// fichero 33398 -- macros y constantes
#define LIMITE_33398 33498
#define FACTOR_33398 4

int aplicar_limite33398(int valor) {
    if (valor > LIMITE_33398) return LIMITE_33398;
    return valor * FACTOR_33398;
}
