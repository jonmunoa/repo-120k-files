// fichero 12322 -- macros y constantes
#define LIMITE_12322 12422
#define FACTOR_12322 3

int aplicar_limite12322(int valor) {
    if (valor > LIMITE_12322) return LIMITE_12322;
    return valor * FACTOR_12322;
}
