// fichero 15842 -- macros y constantes
#define LIMITE_15842 15942
#define FACTOR_15842 3

int aplicar_limite15842(int valor) {
    if (valor > LIMITE_15842) return LIMITE_15842;
    return valor * FACTOR_15842;
}
