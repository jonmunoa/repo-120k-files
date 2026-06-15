// fichero 40142 -- macros y constantes -- MODIFICADO
#define LIMITE_40142 40342
#define FACTOR_40142 4

int aplicar_limite40142(int valor) {
    if (valor > LIMITE_40142) return LIMITE_40142;
    return valor * FACTOR_40142;
}
