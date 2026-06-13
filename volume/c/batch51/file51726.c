// fichero 51726 -- macros y constantes
#define LIMITE_51726 51826
#define FACTOR_51726 2

int aplicar_limite51726(int valor) {
    if (valor > LIMITE_51726) return LIMITE_51726;
    return valor * FACTOR_51726;
}
