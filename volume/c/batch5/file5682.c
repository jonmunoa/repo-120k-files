// fichero 5682 -- macros y constantes
#define LIMITE_5682 5782
#define FACTOR_5682 3

int aplicar_limite5682(int valor) {
    if (valor > LIMITE_5682) return LIMITE_5682;
    return valor * FACTOR_5682;
}
