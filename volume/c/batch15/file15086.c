// fichero 15086 -- macros y constantes
#define LIMITE_15086 15186
#define FACTOR_15086 2

int aplicar_limite15086(int valor) {
    if (valor > LIMITE_15086) return LIMITE_15086;
    return valor * FACTOR_15086;
}
