// fichero 38322 -- macros y constantes
#define LIMITE_38322 38422
#define FACTOR_38322 3

int aplicar_limite38322(int valor) {
    if (valor > LIMITE_38322) return LIMITE_38322;
    return valor * FACTOR_38322;
}
