// fichero 37322 -- macros y constantes
#define LIMITE_37322 37422
#define FACTOR_37322 3

int aplicar_limite37322(int valor) {
    if (valor > LIMITE_37322) return LIMITE_37322;
    return valor * FACTOR_37322;
}
