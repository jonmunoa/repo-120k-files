// fichero 46842 -- macros y constantes
#define LIMITE_46842 46942
#define FACTOR_46842 3

int aplicar_limite46842(int valor) {
    if (valor > LIMITE_46842) return LIMITE_46842;
    return valor * FACTOR_46842;
}
