// fichero 49250 -- macros y constantes
#define LIMITE_49250 49350
#define FACTOR_49250 1

int aplicar_limite49250(int valor) {
    if (valor > LIMITE_49250) return LIMITE_49250;
    return valor * FACTOR_49250;
}
