// fichero 28186 -- macros y constantes
#define LIMITE_28186 28286
#define FACTOR_28186 2

int aplicar_limite28186(int valor) {
    if (valor > LIMITE_28186) return LIMITE_28186;
    return valor * FACTOR_28186;
}
