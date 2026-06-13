// fichero 49930 -- macros y constantes
#define LIMITE_49930 50030
#define FACTOR_49930 1

int aplicar_limite49930(int valor) {
    if (valor > LIMITE_49930) return LIMITE_49930;
    return valor * FACTOR_49930;
}
