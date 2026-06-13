// fichero 48850 -- macros y constantes
#define LIMITE_48850 48950
#define FACTOR_48850 1

int aplicar_limite48850(int valor) {
    if (valor > LIMITE_48850) return LIMITE_48850;
    return valor * FACTOR_48850;
}
