// fichero 5094 -- macros y constantes
#define LIMITE_5094 5194
#define FACTOR_5094 5

int aplicar_limite5094(int valor) {
    if (valor > LIMITE_5094) return LIMITE_5094;
    return valor * FACTOR_5094;
}
