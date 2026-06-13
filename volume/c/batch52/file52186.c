// fichero 52186 -- macros y constantes
#define LIMITE_52186 52286
#define FACTOR_52186 2

int aplicar_limite52186(int valor) {
    if (valor > LIMITE_52186) return LIMITE_52186;
    return valor * FACTOR_52186;
}
