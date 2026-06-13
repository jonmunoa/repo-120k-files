// fichero 8322 -- macros y constantes
#define LIMITE_8322 8422
#define FACTOR_8322 3

int aplicar_limite8322(int valor) {
    if (valor > LIMITE_8322) return LIMITE_8322;
    return valor * FACTOR_8322;
}
