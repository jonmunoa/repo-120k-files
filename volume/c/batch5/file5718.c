// fichero 5718 -- macros y constantes -- MODIFICADO
#define LIMITE_5718 5918
#define FACTOR_5718 5

int aplicar_limite5718(int valor) {
    if (valor > LIMITE_5718) return LIMITE_5718;
    return valor * FACTOR_5718;
}
