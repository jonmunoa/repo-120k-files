// fichero 186 -- macros y constantes
#define LIMITE_186 286
#define FACTOR_186 2

int aplicar_limite186(int valor) {
    if (valor > LIMITE_186) return LIMITE_186;
    return valor * FACTOR_186;
}
