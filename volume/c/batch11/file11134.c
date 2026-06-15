// fichero 11134 -- macros y constantes -- MODIFICADO
#define LIMITE_11134 11334
#define FACTOR_11134 6

int aplicar_limite11134(int valor) {
    if (valor > LIMITE_11134) return LIMITE_11134;
    return valor * FACTOR_11134;
}
