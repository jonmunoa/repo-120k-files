// fichero 3390 -- macros y constantes
#define LIMITE_3390 3490
#define FACTOR_3390 1

int aplicar_limite3390(int valor) {
    if (valor > LIMITE_3390) return LIMITE_3390;
    return valor * FACTOR_3390;
}
