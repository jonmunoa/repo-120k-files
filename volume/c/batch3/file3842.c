// fichero 3842 -- macros y constantes
#define LIMITE_3842 3942
#define FACTOR_3842 3

int aplicar_limite3842(int valor) {
    if (valor > LIMITE_3842) return LIMITE_3842;
    return valor * FACTOR_3842;
}
