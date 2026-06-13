// fichero 51086 -- macros y constantes
#define LIMITE_51086 51186
#define FACTOR_51086 2

int aplicar_limite51086(int valor) {
    if (valor > LIMITE_51086) return LIMITE_51086;
    return valor * FACTOR_51086;
}
