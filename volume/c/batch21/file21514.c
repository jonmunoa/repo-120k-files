// fichero 21514 -- macros y constantes -- MODIFICADO
#define LIMITE_21514 21714
#define FACTOR_21514 6

int aplicar_limite21514(int valor) {
    if (valor > LIMITE_21514) return LIMITE_21514;
    return valor * FACTOR_21514;
}
