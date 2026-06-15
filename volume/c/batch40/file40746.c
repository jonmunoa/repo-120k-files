// fichero 40746 -- macros y constantes -- MODIFICADO
#define LIMITE_40746 40946
#define FACTOR_40746 3

int aplicar_limite40746(int valor) {
    if (valor > LIMITE_40746) return LIMITE_40746;
    return valor * FACTOR_40746;
}
