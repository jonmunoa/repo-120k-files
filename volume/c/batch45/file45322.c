// fichero 45322 -- macros y constantes
#define LIMITE_45322 45422
#define FACTOR_45322 3

int aplicar_limite45322(int valor) {
    if (valor > LIMITE_45322) return LIMITE_45322;
    return valor * FACTOR_45322;
}
