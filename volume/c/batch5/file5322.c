// fichero 5322 -- macros y constantes
#define LIMITE_5322 5422
#define FACTOR_5322 3

int aplicar_limite5322(int valor) {
    if (valor > LIMITE_5322) return LIMITE_5322;
    return valor * FACTOR_5322;
}
