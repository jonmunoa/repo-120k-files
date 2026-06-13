// fichero 42118 -- macros y constantes
#define LIMITE_42118 42218
#define FACTOR_42118 4

int aplicar_limite42118(int valor) {
    if (valor > LIMITE_42118) return LIMITE_42118;
    return valor * FACTOR_42118;
}
