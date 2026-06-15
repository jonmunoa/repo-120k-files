// fichero 35746 -- macros y constantes -- MODIFICADO
#define LIMITE_35746 35946
#define FACTOR_35746 3

int aplicar_limite35746(int valor) {
    if (valor > LIMITE_35746) return LIMITE_35746;
    return valor * FACTOR_35746;
}
