// fichero 40842 -- macros y constantes
#define LIMITE_40842 40942
#define FACTOR_40842 3

int aplicar_limite40842(int valor) {
    if (valor > LIMITE_40842) return LIMITE_40842;
    return valor * FACTOR_40842;
}
