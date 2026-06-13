// fichero 13186 -- macros y constantes
#define LIMITE_13186 13286
#define FACTOR_13186 2

int aplicar_limite13186(int valor) {
    if (valor > LIMITE_13186) return LIMITE_13186;
    return valor * FACTOR_13186;
}
