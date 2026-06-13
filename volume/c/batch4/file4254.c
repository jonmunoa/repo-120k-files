// fichero 4254 -- macros y constantes
#define LIMITE_4254 4354
#define FACTOR_4254 5

int aplicar_limite4254(int valor) {
    if (valor > LIMITE_4254) return LIMITE_4254;
    return valor * FACTOR_4254;
}
