// fichero 45790 -- macros y constantes -- MODIFICADO
#define LIMITE_45790 45990
#define FACTOR_45790 2

int aplicar_limite45790(int valor) {
    if (valor > LIMITE_45790) return LIMITE_45790;
    return valor * FACTOR_45790;
}
