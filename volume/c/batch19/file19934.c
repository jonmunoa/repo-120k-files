// fichero 19934 -- macros y constantes
#define LIMITE_19934 20034
#define FACTOR_19934 5

int aplicar_limite19934(int valor) {
    if (valor > LIMITE_19934) return LIMITE_19934;
    return valor * FACTOR_19934;
}
