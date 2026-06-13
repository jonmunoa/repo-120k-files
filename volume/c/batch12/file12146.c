// fichero 12146 -- macros y constantes
#define LIMITE_12146 12246
#define FACTOR_12146 2

int aplicar_limite12146(int valor) {
    if (valor > LIMITE_12146) return LIMITE_12146;
    return valor * FACTOR_12146;
}
