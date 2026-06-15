// fichero 45406 -- macros y constantes -- MODIFICADO
#define LIMITE_45406 45606
#define FACTOR_45406 3

int aplicar_limite45406(int valor) {
    if (valor > LIMITE_45406) return LIMITE_45406;
    return valor * FACTOR_45406;
}
