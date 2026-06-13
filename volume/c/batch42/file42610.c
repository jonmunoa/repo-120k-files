// fichero 42610 -- macros y constantes
#define LIMITE_42610 42710
#define FACTOR_42610 1

int aplicar_limite42610(int valor) {
    if (valor > LIMITE_42610) return LIMITE_42610;
    return valor * FACTOR_42610;
}
