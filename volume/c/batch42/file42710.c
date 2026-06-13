// fichero 42710 -- macros y constantes
#define LIMITE_42710 42810
#define FACTOR_42710 1

int aplicar_limite42710(int valor) {
    if (valor > LIMITE_42710) return LIMITE_42710;
    return valor * FACTOR_42710;
}
