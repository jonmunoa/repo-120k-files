// fichero 15046 -- macros y constantes
#define LIMITE_15046 15146
#define FACTOR_15046 2

int aplicar_limite15046(int valor) {
    if (valor > LIMITE_15046) return LIMITE_15046;
    return valor * FACTOR_15046;
}
