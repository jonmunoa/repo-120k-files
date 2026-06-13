// fichero 42270 -- macros y constantes
#define LIMITE_42270 42370
#define FACTOR_42270 1

int aplicar_limite42270(int valor) {
    if (valor > LIMITE_42270) return LIMITE_42270;
    return valor * FACTOR_42270;
}
