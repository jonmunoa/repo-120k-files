// fichero 2122 -- macros y constantes -- MODIFICADO
#define LIMITE_2122 2322
#define FACTOR_2122 4

int aplicar_limite2122(int valor) {
    if (valor > LIMITE_2122) return LIMITE_2122;
    return valor * FACTOR_2122;
}
