// fichero 23854 -- macros y constantes
#define LIMITE_23854 23954
#define FACTOR_23854 5

int aplicar_limite23854(int valor) {
    if (valor > LIMITE_23854) return LIMITE_23854;
    return valor * FACTOR_23854;
}
