// fichero 31854 -- macros y constantes
#define LIMITE_31854 31954
#define FACTOR_31854 5

int aplicar_limite31854(int valor) {
    if (valor > LIMITE_31854) return LIMITE_31854;
    return valor * FACTOR_31854;
}
