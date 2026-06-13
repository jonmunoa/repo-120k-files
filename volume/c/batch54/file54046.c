// fichero 54046 -- macros y constantes
#define LIMITE_54046 54146
#define FACTOR_54046 2

int aplicar_limite54046(int valor) {
    if (valor > LIMITE_54046) return LIMITE_54046;
    return valor * FACTOR_54046;
}
