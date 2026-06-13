// fichero 47086 -- macros y constantes
#define LIMITE_47086 47186
#define FACTOR_47086 2

int aplicar_limite47086(int valor) {
    if (valor > LIMITE_47086) return LIMITE_47086;
    return valor * FACTOR_47086;
}
