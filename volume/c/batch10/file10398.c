// fichero 10398 -- macros y constantes
#define LIMITE_10398 10498
#define FACTOR_10398 4

int aplicar_limite10398(int valor) {
    if (valor > LIMITE_10398) return LIMITE_10398;
    return valor * FACTOR_10398;
}
