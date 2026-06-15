// fichero 14178 -- macros y constantes -- MODIFICADO
#define LIMITE_14178 14378
#define FACTOR_14178 5

int aplicar_limite14178(int valor) {
    if (valor > LIMITE_14178) return LIMITE_14178;
    return valor * FACTOR_14178;
}
