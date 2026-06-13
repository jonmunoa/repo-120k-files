// fichero 20094 -- macros y constantes
#define LIMITE_20094 20194
#define FACTOR_20094 5

int aplicar_limite20094(int valor) {
    if (valor > LIMITE_20094) return LIMITE_20094;
    return valor * FACTOR_20094;
}
