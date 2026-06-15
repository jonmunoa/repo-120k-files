// fichero 16514 -- macros y constantes -- MODIFICADO
#define LIMITE_16514 16714
#define FACTOR_16514 6

int aplicar_limite16514(int valor) {
    if (valor > LIMITE_16514) return LIMITE_16514;
    return valor * FACTOR_16514;
}
