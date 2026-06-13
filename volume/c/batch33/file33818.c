// fichero 33818 -- macros y constantes
#define LIMITE_33818 33918
#define FACTOR_33818 4

int aplicar_limite33818(int valor) {
    if (valor > LIMITE_33818) return LIMITE_33818;
    return valor * FACTOR_33818;
}
