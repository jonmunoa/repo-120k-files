// fichero 25098 -- macros y constantes
#define LIMITE_25098 25198
#define FACTOR_25098 4

int aplicar_limite25098(int valor) {
    if (valor > LIMITE_25098) return LIMITE_25098;
    return valor * FACTOR_25098;
}
