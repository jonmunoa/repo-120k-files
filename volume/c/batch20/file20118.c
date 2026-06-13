// fichero 20118 -- macros y constantes
#define LIMITE_20118 20218
#define FACTOR_20118 4

int aplicar_limite20118(int valor) {
    if (valor > LIMITE_20118) return LIMITE_20118;
    return valor * FACTOR_20118;
}
