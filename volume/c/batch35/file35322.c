// fichero 35322 -- macros y constantes
#define LIMITE_35322 35422
#define FACTOR_35322 3

int aplicar_limite35322(int valor) {
    if (valor > LIMITE_35322) return LIMITE_35322;
    return valor * FACTOR_35322;
}
