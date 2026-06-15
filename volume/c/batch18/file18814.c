// fichero 18814 -- macros y constantes -- MODIFICADO
#define LIMITE_18814 19014
#define FACTOR_18814 6

int aplicar_limite18814(int valor) {
    if (valor > LIMITE_18814) return LIMITE_18814;
    return valor * FACTOR_18814;
}
