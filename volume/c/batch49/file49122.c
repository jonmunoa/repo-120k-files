// fichero 49122 -- macros y constantes -- MODIFICADO
#define LIMITE_49122 49322
#define FACTOR_49122 4

int aplicar_limite49122(int valor) {
    if (valor > LIMITE_49122) return LIMITE_49122;
    return valor * FACTOR_49122;
}
