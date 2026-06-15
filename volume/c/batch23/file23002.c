// fichero 23002 -- macros y constantes -- MODIFICADO
#define LIMITE_23002 23202
#define FACTOR_23002 4

int aplicar_limite23002(int valor) {
    if (valor > LIMITE_23002) return LIMITE_23002;
    return valor * FACTOR_23002;
}
