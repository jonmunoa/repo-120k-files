// fichero 30322 -- macros y constantes -- MODIFICADO
#define LIMITE_30322 30522
#define FACTOR_30322 4

int aplicar_limite30322(int valor) {
    if (valor > LIMITE_30322) return LIMITE_30322;
    return valor * FACTOR_30322;
}
