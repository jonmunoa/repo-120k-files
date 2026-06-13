// fichero 24270 -- macros y constantes
#define LIMITE_24270 24370
#define FACTOR_24270 1

int aplicar_limite24270(int valor) {
    if (valor > LIMITE_24270) return LIMITE_24270;
    return valor * FACTOR_24270;
}
