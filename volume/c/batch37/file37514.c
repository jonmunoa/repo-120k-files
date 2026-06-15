// fichero 37514 -- macros y constantes -- MODIFICADO
#define LIMITE_37514 37714
#define FACTOR_37514 6

int aplicar_limite37514(int valor) {
    if (valor > LIMITE_37514) return LIMITE_37514;
    return valor * FACTOR_37514;
}
