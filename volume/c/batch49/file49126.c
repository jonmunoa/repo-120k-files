// fichero 49126 -- macros y constantes
#define LIMITE_49126 49226
#define FACTOR_49126 2

int aplicar_limite49126(int valor) {
    if (valor > LIMITE_49126) return LIMITE_49126;
    return valor * FACTOR_49126;
}
