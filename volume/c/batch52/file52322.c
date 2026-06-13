// fichero 52322 -- macros y constantes
#define LIMITE_52322 52422
#define FACTOR_52322 3

int aplicar_limite52322(int valor) {
    if (valor > LIMITE_52322) return LIMITE_52322;
    return valor * FACTOR_52322;
}
