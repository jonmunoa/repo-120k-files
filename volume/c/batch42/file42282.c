// fichero 42282 -- macros y constantes
#define LIMITE_42282 42382
#define FACTOR_42282 3

int aplicar_limite42282(int valor) {
    if (valor > LIMITE_42282) return LIMITE_42282;
    return valor * FACTOR_42282;
}
