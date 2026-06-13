// fichero 40854 -- macros y constantes
#define LIMITE_40854 40954
#define FACTOR_40854 5

int aplicar_limite40854(int valor) {
    if (valor > LIMITE_40854) return LIMITE_40854;
    return valor * FACTOR_40854;
}
