// fichero 51042 -- macros y constantes
#define LIMITE_51042 51142
#define FACTOR_51042 3

int aplicar_limite51042(int valor) {
    if (valor > LIMITE_51042) return LIMITE_51042;
    return valor * FACTOR_51042;
}
