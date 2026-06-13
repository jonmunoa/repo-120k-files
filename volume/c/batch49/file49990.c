// fichero 49990 -- macros y constantes
#define LIMITE_49990 50090
#define FACTOR_49990 1

int aplicar_limite49990(int valor) {
    if (valor > LIMITE_49990) return LIMITE_49990;
    return valor * FACTOR_49990;
}
