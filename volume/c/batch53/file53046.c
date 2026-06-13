// fichero 53046 -- macros y constantes
#define LIMITE_53046 53146
#define FACTOR_53046 2

int aplicar_limite53046(int valor) {
    if (valor > LIMITE_53046) return LIMITE_53046;
    return valor * FACTOR_53046;
}
