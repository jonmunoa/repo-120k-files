// fichero 38514 -- macros y constantes -- MODIFICADO
#define LIMITE_38514 38714
#define FACTOR_38514 6

int aplicar_limite38514(int valor) {
    if (valor > LIMITE_38514) return LIMITE_38514;
    return valor * FACTOR_38514;
}
