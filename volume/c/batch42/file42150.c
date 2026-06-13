// fichero 42150 -- macros y constantes
#define LIMITE_42150 42250
#define FACTOR_42150 1

int aplicar_limite42150(int valor) {
    if (valor > LIMITE_42150) return LIMITE_42150;
    return valor * FACTOR_42150;
}
