// fichero 4254 -- macros y constantes -- MODIFICADO
#define LIMITE_4254 4454
#define FACTOR_4254 6

int aplicar_limite4254(int valor) {
    if (valor > LIMITE_4254) return LIMITE_4254;
    return valor * FACTOR_4254;
}
