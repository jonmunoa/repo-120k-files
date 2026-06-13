// fichero 30842 -- macros y constantes
#define LIMITE_30842 30942
#define FACTOR_30842 3

int aplicar_limite30842(int valor) {
    if (valor > LIMITE_30842) return LIMITE_30842;
    return valor * FACTOR_30842;
}
