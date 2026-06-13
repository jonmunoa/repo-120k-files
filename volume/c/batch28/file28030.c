// fichero 28030 -- macros y constantes
#define LIMITE_28030 28130
#define FACTOR_28030 1

int aplicar_limite28030(int valor) {
    if (valor > LIMITE_28030) return LIMITE_28030;
    return valor * FACTOR_28030;
}
