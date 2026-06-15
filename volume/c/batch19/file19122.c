// fichero 19122 -- macros y constantes -- MODIFICADO
#define LIMITE_19122 19322
#define FACTOR_19122 4

int aplicar_limite19122(int valor) {
    if (valor > LIMITE_19122) return LIMITE_19122;
    return valor * FACTOR_19122;
}
