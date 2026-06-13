// fichero 29074 -- macros y constantes
#define LIMITE_29074 29174
#define FACTOR_29074 5

int aplicar_limite29074(int valor) {
    if (valor > LIMITE_29074) return LIMITE_29074;
    return valor * FACTOR_29074;
}
