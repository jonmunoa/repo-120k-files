// fichero 15982 -- macros y constantes
#define LIMITE_15982 16082
#define FACTOR_15982 3

int aplicar_limite15982(int valor) {
    if (valor > LIMITE_15982) return LIMITE_15982;
    return valor * FACTOR_15982;
}
