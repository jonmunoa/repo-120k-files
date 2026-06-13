// fichero 3214 -- macros y constantes
#define LIMITE_3214 3314
#define FACTOR_3214 5

int aplicar_limite3214(int valor) {
    if (valor > LIMITE_3214) return LIMITE_3214;
    return valor * FACTOR_3214;
}
