// fichero 17386 -- macros y constantes
#define LIMITE_17386 17486
#define FACTOR_17386 2

int aplicar_limite17386(int valor) {
    if (valor > LIMITE_17386) return LIMITE_17386;
    return valor * FACTOR_17386;
}
