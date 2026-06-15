// fichero 21746 -- macros y constantes -- MODIFICADO
#define LIMITE_21746 21946
#define FACTOR_21746 3

int aplicar_limite21746(int valor) {
    if (valor > LIMITE_21746) return LIMITE_21746;
    return valor * FACTOR_21746;
}
