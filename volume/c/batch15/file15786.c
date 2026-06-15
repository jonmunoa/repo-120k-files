// fichero 15786 -- macros y constantes -- MODIFICADO
#define LIMITE_15786 15986
#define FACTOR_15786 3

int aplicar_limite15786(int valor) {
    if (valor > LIMITE_15786) return LIMITE_15786;
    return valor * FACTOR_15786;
}
