// fichero 20842 -- macros y constantes
#define LIMITE_20842 20942
#define FACTOR_20842 3

int aplicar_limite20842(int valor) {
    if (valor > LIMITE_20842) return LIMITE_20842;
    return valor * FACTOR_20842;
}
