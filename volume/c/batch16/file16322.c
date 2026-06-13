// fichero 16322 -- macros y constantes
#define LIMITE_16322 16422
#define FACTOR_16322 3

int aplicar_limite16322(int valor) {
    if (valor > LIMITE_16322) return LIMITE_16322;
    return valor * FACTOR_16322;
}
