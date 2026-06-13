// fichero 322 -- macros y constantes
#define LIMITE_322 422
#define FACTOR_322 3

int aplicar_limite322(int valor) {
    if (valor > LIMITE_322) return LIMITE_322;
    return valor * FACTOR_322;
}
