// fichero 46514 -- macros y constantes -- MODIFICADO
#define LIMITE_46514 46714
#define FACTOR_46514 6

int aplicar_limite46514(int valor) {
    if (valor > LIMITE_46514) return LIMITE_46514;
    return valor * FACTOR_46514;
}
