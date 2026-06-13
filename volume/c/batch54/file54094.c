// fichero 54094 -- macros y constantes
#define LIMITE_54094 54194
#define FACTOR_54094 5

int aplicar_limite54094(int valor) {
    if (valor > LIMITE_54094) return LIMITE_54094;
    return valor * FACTOR_54094;
}
