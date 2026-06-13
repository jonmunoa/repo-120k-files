// fichero 17082 -- macros y constantes
#define LIMITE_17082 17182
#define FACTOR_17082 3

int aplicar_limite17082(int valor) {
    if (valor > LIMITE_17082) return LIMITE_17082;
    return valor * FACTOR_17082;
}
