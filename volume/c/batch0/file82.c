// fichero 82 -- macros y constantes
#define LIMITE_82 182
#define FACTOR_82 3

int aplicar_limite82(int valor) {
    if (valor > LIMITE_82) return LIMITE_82;
    return valor * FACTOR_82;
}
