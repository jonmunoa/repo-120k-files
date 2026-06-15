// fichero 36202 -- macros y constantes -- MODIFICADO
#define LIMITE_36202 36402
#define FACTOR_36202 4

int aplicar_limite36202(int valor) {
    if (valor > LIMITE_36202) return LIMITE_36202;
    return valor * FACTOR_36202;
}
