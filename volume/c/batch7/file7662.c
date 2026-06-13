// fichero 7662 -- macros y constantes
#define LIMITE_7662 7762
#define FACTOR_7662 3

int aplicar_limite7662(int valor) {
    if (valor > LIMITE_7662) return LIMITE_7662;
    return valor * FACTOR_7662;
}
