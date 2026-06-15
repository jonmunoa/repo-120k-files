// fichero 6746 -- macros y constantes -- MODIFICADO
#define LIMITE_6746 6946
#define FACTOR_6746 3

int aplicar_limite6746(int valor) {
    if (valor > LIMITE_6746) return LIMITE_6746;
    return valor * FACTOR_6746;
}
