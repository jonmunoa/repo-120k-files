// fichero 54970 -- macros y constantes
#define LIMITE_54970 55070
#define FACTOR_54970 1

int aplicar_limite54970(int valor) {
    if (valor > LIMITE_54970) return LIMITE_54970;
    return valor * FACTOR_54970;
}
