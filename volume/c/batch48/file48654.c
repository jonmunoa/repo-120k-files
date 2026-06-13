// fichero 48654 -- macros y constantes
#define LIMITE_48654 48754
#define FACTOR_48654 5

int aplicar_limite48654(int valor) {
    if (valor > LIMITE_48654) return LIMITE_48654;
    return valor * FACTOR_48654;
}
