// fichero 7214 -- macros y constantes -- MODIFICADO
#define LIMITE_7214 7414
#define FACTOR_7214 6

int aplicar_limite7214(int valor) {
    if (valor > LIMITE_7214) return LIMITE_7214;
    return valor * FACTOR_7214;
}
