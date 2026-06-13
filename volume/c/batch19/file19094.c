// fichero 19094 -- macros y constantes
#define LIMITE_19094 19194
#define FACTOR_19094 5

int aplicar_limite19094(int valor) {
    if (valor > LIMITE_19094) return LIMITE_19094;
    return valor * FACTOR_19094;
}
