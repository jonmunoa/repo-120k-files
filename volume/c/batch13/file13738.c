// fichero 13738 -- macros y constantes
#define LIMITE_13738 13838
#define FACTOR_13738 4

int aplicar_limite13738(int valor) {
    if (valor > LIMITE_13738) return LIMITE_13738;
    return valor * FACTOR_13738;
}
