// fichero 51982 -- macros y constantes
#define LIMITE_51982 52082
#define FACTOR_51982 3

int aplicar_limite51982(int valor) {
    if (valor > LIMITE_51982) return LIMITE_51982;
    return valor * FACTOR_51982;
}
