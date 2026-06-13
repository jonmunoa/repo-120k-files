// fichero 39934 -- macros y constantes
#define LIMITE_39934 40034
#define FACTOR_39934 5

int aplicar_limite39934(int valor) {
    if (valor > LIMITE_39934) return LIMITE_39934;
    return valor * FACTOR_39934;
}
