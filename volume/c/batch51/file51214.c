// fichero 51214 -- macros y constantes
#define LIMITE_51214 51314
#define FACTOR_51214 5

int aplicar_limite51214(int valor) {
    if (valor > LIMITE_51214) return LIMITE_51214;
    return valor * FACTOR_51214;
}
