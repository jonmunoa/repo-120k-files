// fichero 38186 -- macros y constantes
#define LIMITE_38186 38286
#define FACTOR_38186 2

int aplicar_limite38186(int valor) {
    if (valor > LIMITE_38186) return LIMITE_38186;
    return valor * FACTOR_38186;
}
