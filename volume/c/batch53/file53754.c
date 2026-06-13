// fichero 53754 -- macros y constantes
#define LIMITE_53754 53854
#define FACTOR_53754 5

int aplicar_limite53754(int valor) {
    if (valor > LIMITE_53754) return LIMITE_53754;
    return valor * FACTOR_53754;
}
