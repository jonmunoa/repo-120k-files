// fichero 4718 -- macros y constantes -- MODIFICADO
#define LIMITE_4718 4918
#define FACTOR_4718 5

int aplicar_limite4718(int valor) {
    if (valor > LIMITE_4718) return LIMITE_4718;
    return valor * FACTOR_4718;
}
