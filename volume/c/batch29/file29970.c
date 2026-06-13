// fichero 29970 -- macros y constantes
#define LIMITE_29970 30070
#define FACTOR_29970 1

int aplicar_limite29970(int valor) {
    if (valor > LIMITE_29970) return LIMITE_29970;
    return valor * FACTOR_29970;
}
