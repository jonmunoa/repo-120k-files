// fichero 40322 -- macros y constantes
#define LIMITE_40322 40422
#define FACTOR_40322 3

int aplicar_limite40322(int valor) {
    if (valor > LIMITE_40322) return LIMITE_40322;
    return valor * FACTOR_40322;
}
