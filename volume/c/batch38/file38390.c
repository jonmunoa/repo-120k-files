// fichero 38390 -- macros y constantes
#define LIMITE_38390 38490
#define FACTOR_38390 1

int aplicar_limite38390(int valor) {
    if (valor > LIMITE_38390) return LIMITE_38390;
    return valor * FACTOR_38390;
}
