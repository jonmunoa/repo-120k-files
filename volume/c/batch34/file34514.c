// fichero 34514 -- macros y constantes -- MODIFICADO
#define LIMITE_34514 34714
#define FACTOR_34514 6

int aplicar_limite34514(int valor) {
    if (valor > LIMITE_34514) return LIMITE_34514;
    return valor * FACTOR_34514;
}
