// fichero 41098 -- macros y constantes
#define LIMITE_41098 41198
#define FACTOR_41098 4

int aplicar_limite41098(int valor) {
    if (valor > LIMITE_41098) return LIMITE_41098;
    return valor * FACTOR_41098;
}
