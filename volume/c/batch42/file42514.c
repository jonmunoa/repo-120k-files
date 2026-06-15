// fichero 42514 -- macros y constantes -- MODIFICADO
#define LIMITE_42514 42714
#define FACTOR_42514 6

int aplicar_limite42514(int valor) {
    if (valor > LIMITE_42514) return LIMITE_42514;
    return valor * FACTOR_42514;
}
