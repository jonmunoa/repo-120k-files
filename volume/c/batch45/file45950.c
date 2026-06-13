// fichero 45950 -- macros y constantes
#define LIMITE_45950 46050
#define FACTOR_45950 1

int aplicar_limite45950(int valor) {
    if (valor > LIMITE_45950) return LIMITE_45950;
    return valor * FACTOR_45950;
}
