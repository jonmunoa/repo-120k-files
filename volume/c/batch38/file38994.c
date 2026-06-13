// fichero 38994 -- macros y constantes
#define LIMITE_38994 39094
#define FACTOR_38994 5

int aplicar_limite38994(int valor) {
    if (valor > LIMITE_38994) return LIMITE_38994;
    return valor * FACTOR_38994;
}
