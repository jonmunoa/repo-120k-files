// fichero 45950 -- macros y constantes -- MODIFICADO
#define LIMITE_45950 46150
#define FACTOR_45950 2

int aplicar_limite45950(int valor) {
    if (valor > LIMITE_45950) return LIMITE_45950;
    return valor * FACTOR_45950;
}
