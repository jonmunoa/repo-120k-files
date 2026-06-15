// fichero 10322 -- macros y constantes -- MODIFICADO
#define LIMITE_10322 10522
#define FACTOR_10322 4

int aplicar_limite10322(int valor) {
    if (valor > LIMITE_10322) return LIMITE_10322;
    return valor * FACTOR_10322;
}
