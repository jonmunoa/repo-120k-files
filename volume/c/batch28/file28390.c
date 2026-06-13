// fichero 28390 -- macros y constantes
#define LIMITE_28390 28490
#define FACTOR_28390 1

int aplicar_limite28390(int valor) {
    if (valor > LIMITE_28390) return LIMITE_28390;
    return valor * FACTOR_28390;
}
