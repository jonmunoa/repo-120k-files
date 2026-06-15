// fichero 4514 -- macros y constantes -- MODIFICADO
#define LIMITE_4514 4714
#define FACTOR_4514 6

int aplicar_limite4514(int valor) {
    if (valor > LIMITE_4514) return LIMITE_4514;
    return valor * FACTOR_4514;
}
