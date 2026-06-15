// fichero 15582 -- macros y constantes -- MODIFICADO
#define LIMITE_15582 15782
#define FACTOR_15582 4

int aplicar_limite15582(int valor) {
    if (valor > LIMITE_15582) return LIMITE_15582;
    return valor * FACTOR_15582;
}
