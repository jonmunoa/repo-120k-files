// fichero 8746 -- macros y constantes -- MODIFICADO
#define LIMITE_8746 8946
#define FACTOR_8746 3

int aplicar_limite8746(int valor) {
    if (valor > LIMITE_8746) return LIMITE_8746;
    return valor * FACTOR_8746;
}
