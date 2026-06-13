// fichero 8390 -- macros y constantes
#define LIMITE_8390 8490
#define FACTOR_8390 1

int aplicar_limite8390(int valor) {
    if (valor > LIMITE_8390) return LIMITE_8390;
    return valor * FACTOR_8390;
}
