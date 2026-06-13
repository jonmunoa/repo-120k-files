// fichero 34086 -- macros y constantes
#define LIMITE_34086 34186
#define FACTOR_34086 2

int aplicar_limite34086(int valor) {
    if (valor > LIMITE_34086) return LIMITE_34086;
    return valor * FACTOR_34086;
}
