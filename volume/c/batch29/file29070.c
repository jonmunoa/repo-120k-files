// fichero 29070 -- macros y constantes
#define LIMITE_29070 29170
#define FACTOR_29070 1

int aplicar_limite29070(int valor) {
    if (valor > LIMITE_29070) return LIMITE_29070;
    return valor * FACTOR_29070;
}
