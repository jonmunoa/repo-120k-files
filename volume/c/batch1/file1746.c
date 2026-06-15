// fichero 1746 -- macros y constantes -- MODIFICADO
#define LIMITE_1746 1946
#define FACTOR_1746 3

int aplicar_limite1746(int valor) {
    if (valor > LIMITE_1746) return LIMITE_1746;
    return valor * FACTOR_1746;
}
