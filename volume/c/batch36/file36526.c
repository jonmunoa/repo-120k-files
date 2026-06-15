// fichero 36526 -- macros y constantes -- MODIFICADO
#define LIMITE_36526 36726
#define FACTOR_36526 3

int aplicar_limite36526(int valor) {
    if (valor > LIMITE_36526) return LIMITE_36526;
    return valor * FACTOR_36526;
}
