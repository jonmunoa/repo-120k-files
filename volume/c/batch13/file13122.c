// fichero 13122 -- macros y constantes -- MODIFICADO
#define LIMITE_13122 13322
#define FACTOR_13122 4

int aplicar_limite13122(int valor) {
    if (valor > LIMITE_13122) return LIMITE_13122;
    return valor * FACTOR_13122;
}
