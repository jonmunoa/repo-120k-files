// fichero 42682 -- macros y constantes -- MODIFICADO
#define LIMITE_42682 42882
#define FACTOR_42682 4

int aplicar_limite42682(int valor) {
    if (valor > LIMITE_42682) return LIMITE_42682;
    return valor * FACTOR_42682;
}
