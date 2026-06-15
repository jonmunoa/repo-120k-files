// fichero 5514 -- macros y constantes -- MODIFICADO
#define LIMITE_5514 5714
#define FACTOR_5514 6

int aplicar_limite5514(int valor) {
    if (valor > LIMITE_5514) return LIMITE_5514;
    return valor * FACTOR_5514;
}
