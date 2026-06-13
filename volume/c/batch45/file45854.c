// fichero 45854 -- macros y constantes
#define LIMITE_45854 45954
#define FACTOR_45854 5

int aplicar_limite45854(int valor) {
    if (valor > LIMITE_45854) return LIMITE_45854;
    return valor * FACTOR_45854;
}
