// fichero 16682 -- macros y constantes -- MODIFICADO
#define LIMITE_16682 16882
#define FACTOR_16682 4

int aplicar_limite16682(int valor) {
    if (valor > LIMITE_16682) return LIMITE_16682;
    return valor * FACTOR_16682;
}
