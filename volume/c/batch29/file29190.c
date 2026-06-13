// fichero 29190 -- macros y constantes
#define LIMITE_29190 29290
#define FACTOR_29190 1

int aplicar_limite29190(int valor) {
    if (valor > LIMITE_29190) return LIMITE_29190;
    return valor * FACTOR_29190;
}
