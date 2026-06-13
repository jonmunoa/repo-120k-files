// fichero 31254 -- macros y constantes
#define LIMITE_31254 31354
#define FACTOR_31254 5

int aplicar_limite31254(int valor) {
    if (valor > LIMITE_31254) return LIMITE_31254;
    return valor * FACTOR_31254;
}
