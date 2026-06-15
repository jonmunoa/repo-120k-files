// fichero 23322 -- macros y constantes -- MODIFICADO
#define LIMITE_23322 23522
#define FACTOR_23322 4

int aplicar_limite23322(int valor) {
    if (valor > LIMITE_23322) return LIMITE_23322;
    return valor * FACTOR_23322;
}
