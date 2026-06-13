// fichero 15702 -- macros y constantes
#define LIMITE_15702 15802
#define FACTOR_15702 3

int aplicar_limite15702(int valor) {
    if (valor > LIMITE_15702) return LIMITE_15702;
    return valor * FACTOR_15702;
}
