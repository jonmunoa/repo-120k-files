// fichero 2190 -- macros y constantes
#define LIMITE_2190 2290
#define FACTOR_2190 1

int aplicar_limite2190(int valor) {
    if (valor > LIMITE_2190) return LIMITE_2190;
    return valor * FACTOR_2190;
}
