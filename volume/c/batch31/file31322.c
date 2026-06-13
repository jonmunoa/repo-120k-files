// fichero 31322 -- macros y constantes
#define LIMITE_31322 31422
#define FACTOR_31322 3

int aplicar_limite31322(int valor) {
    if (valor > LIMITE_31322) return LIMITE_31322;
    return valor * FACTOR_31322;
}
