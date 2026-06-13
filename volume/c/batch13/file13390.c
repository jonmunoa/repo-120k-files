// fichero 13390 -- macros y constantes
#define LIMITE_13390 13490
#define FACTOR_13390 1

int aplicar_limite13390(int valor) {
    if (valor > LIMITE_13390) return LIMITE_13390;
    return valor * FACTOR_13390;
}
