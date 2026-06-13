// fichero 6322 -- macros y constantes
#define LIMITE_6322 6422
#define FACTOR_6322 3

int aplicar_limite6322(int valor) {
    if (valor > LIMITE_6322) return LIMITE_6322;
    return valor * FACTOR_6322;
}
