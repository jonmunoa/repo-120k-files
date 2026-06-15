// fichero 36322 -- macros y constantes -- MODIFICADO
#define LIMITE_36322 36522
#define FACTOR_36322 4

int aplicar_limite36322(int valor) {
    if (valor > LIMITE_36322) return LIMITE_36322;
    return valor * FACTOR_36322;
}
