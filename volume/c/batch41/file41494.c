// fichero 41494 -- macros y constantes
#define LIMITE_41494 41594
#define FACTOR_41494 5

int aplicar_limite41494(int valor) {
    if (valor > LIMITE_41494) return LIMITE_41494;
    return valor * FACTOR_41494;
}
