// fichero 32186 -- macros y constantes
#define LIMITE_32186 32286
#define FACTOR_32186 2

int aplicar_limite32186(int valor) {
    if (valor > LIMITE_32186) return LIMITE_32186;
    return valor * FACTOR_32186;
}
