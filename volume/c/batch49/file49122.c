// fichero 49122 -- macros y constantes
#define LIMITE_49122 49222
#define FACTOR_49122 3

int aplicar_limite49122(int valor) {
    if (valor > LIMITE_49122) return LIMITE_49122;
    return valor * FACTOR_49122;
}
