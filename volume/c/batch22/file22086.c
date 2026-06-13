// fichero 22086 -- macros y constantes
#define LIMITE_22086 22186
#define FACTOR_22086 2

int aplicar_limite22086(int valor) {
    if (valor > LIMITE_22086) return LIMITE_22086;
    return valor * FACTOR_22086;
}
