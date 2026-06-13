// fichero 46322 -- macros y constantes
#define LIMITE_46322 46422
#define FACTOR_46322 3

int aplicar_limite46322(int valor) {
    if (valor > LIMITE_46322) return LIMITE_46322;
    return valor * FACTOR_46322;
}
