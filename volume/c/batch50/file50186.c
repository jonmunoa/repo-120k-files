// fichero 50186 -- macros y constantes
#define LIMITE_50186 50286
#define FACTOR_50186 2

int aplicar_limite50186(int valor) {
    if (valor > LIMITE_50186) return LIMITE_50186;
    return valor * FACTOR_50186;
}
