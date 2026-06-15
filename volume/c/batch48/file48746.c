// fichero 48746 -- macros y constantes -- MODIFICADO
#define LIMITE_48746 48946
#define FACTOR_48746 3

int aplicar_limite48746(int valor) {
    if (valor > LIMITE_48746) return LIMITE_48746;
    return valor * FACTOR_48746;
}
