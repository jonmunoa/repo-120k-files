// fichero 51118 -- macros y constantes
#define LIMITE_51118 51218
#define FACTOR_51118 4

int aplicar_limite51118(int valor) {
    if (valor > LIMITE_51118) return LIMITE_51118;
    return valor * FACTOR_51118;
}
