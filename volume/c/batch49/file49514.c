// fichero 49514 -- macros y constantes -- MODIFICADO
#define LIMITE_49514 49714
#define FACTOR_49514 6

int aplicar_limite49514(int valor) {
    if (valor > LIMITE_49514) return LIMITE_49514;
    return valor * FACTOR_49514;
}
