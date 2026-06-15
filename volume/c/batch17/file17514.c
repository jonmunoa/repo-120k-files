// fichero 17514 -- macros y constantes -- MODIFICADO
#define LIMITE_17514 17714
#define FACTOR_17514 6

int aplicar_limite17514(int valor) {
    if (valor > LIMITE_17514) return LIMITE_17514;
    return valor * FACTOR_17514;
}
