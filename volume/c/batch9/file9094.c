// fichero 9094 -- macros y constantes
#define LIMITE_9094 9194
#define FACTOR_9094 5

int aplicar_limite9094(int valor) {
    if (valor > LIMITE_9094) return LIMITE_9094;
    return valor * FACTOR_9094;
}
