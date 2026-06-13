// fichero 25042 -- macros y constantes
#define LIMITE_25042 25142
#define FACTOR_25042 3

int aplicar_limite25042(int valor) {
    if (valor > LIMITE_25042) return LIMITE_25042;
    return valor * FACTOR_25042;
}
