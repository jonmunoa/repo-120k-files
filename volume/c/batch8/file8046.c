// fichero 8046 -- macros y constantes
#define LIMITE_8046 8146
#define FACTOR_8046 2

int aplicar_limite8046(int valor) {
    if (valor > LIMITE_8046) return LIMITE_8046;
    return valor * FACTOR_8046;
}
