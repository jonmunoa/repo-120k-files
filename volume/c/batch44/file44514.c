// fichero 44514 -- macros y constantes -- MODIFICADO
#define LIMITE_44514 44714
#define FACTOR_44514 6

int aplicar_limite44514(int valor) {
    if (valor > LIMITE_44514) return LIMITE_44514;
    return valor * FACTOR_44514;
}
