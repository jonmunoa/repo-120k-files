// fichero 4846 -- macros y constantes -- MODIFICADO
#define LIMITE_4846 5046
#define FACTOR_4846 3

int aplicar_limite4846(int valor) {
    if (valor > LIMITE_4846) return LIMITE_4846;
    return valor * FACTOR_4846;
}
