// fichero 51854 -- macros y constantes
#define LIMITE_51854 51954
#define FACTOR_51854 5

int aplicar_limite51854(int valor) {
    if (valor > LIMITE_51854) return LIMITE_51854;
    return valor * FACTOR_51854;
}
