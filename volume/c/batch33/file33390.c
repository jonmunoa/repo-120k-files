// fichero 33390 -- macros y constantes
#define LIMITE_33390 33490
#define FACTOR_33390 1

int aplicar_limite33390(int valor) {
    if (valor > LIMITE_33390) return LIMITE_33390;
    return valor * FACTOR_33390;
}
