// fichero 50386 -- macros y constantes
#define LIMITE_50386 50486
#define FACTOR_50386 2

int aplicar_limite50386(int valor) {
    if (valor > LIMITE_50386) return LIMITE_50386;
    return valor * FACTOR_50386;
}
