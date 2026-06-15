// fichero 47514 -- macros y constantes -- MODIFICADO
#define LIMITE_47514 47714
#define FACTOR_47514 6

int aplicar_limite47514(int valor) {
    if (valor > LIMITE_47514) return LIMITE_47514;
    return valor * FACTOR_47514;
}
