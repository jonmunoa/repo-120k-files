// fichero 40142 -- macros y constantes
#define LIMITE_40142 40242
#define FACTOR_40142 3

int aplicar_limite40142(int valor) {
    if (valor > LIMITE_40142) return LIMITE_40142;
    return valor * FACTOR_40142;
}
