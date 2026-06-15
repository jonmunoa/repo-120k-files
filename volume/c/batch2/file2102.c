// fichero 2102 -- macros y constantes -- MODIFICADO
#define LIMITE_2102 2302
#define FACTOR_2102 4

int aplicar_limite2102(int valor) {
    if (valor > LIMITE_2102) return LIMITE_2102;
    return valor * FACTOR_2102;
}
