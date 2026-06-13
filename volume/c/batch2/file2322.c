// fichero 2322 -- macros y constantes
#define LIMITE_2322 2422
#define FACTOR_2322 3

int aplicar_limite2322(int valor) {
    if (valor > LIMITE_2322) return LIMITE_2322;
    return valor * FACTOR_2322;
}
