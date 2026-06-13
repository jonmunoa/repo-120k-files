// fichero 42286 -- macros y constantes
#define LIMITE_42286 42386
#define FACTOR_42286 2

int aplicar_limite42286(int valor) {
    if (valor > LIMITE_42286) return LIMITE_42286;
    return valor * FACTOR_42286;
}
