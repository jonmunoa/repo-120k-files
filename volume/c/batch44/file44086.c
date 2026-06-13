// fichero 44086 -- macros y constantes
#define LIMITE_44086 44186
#define FACTOR_44086 2

int aplicar_limite44086(int valor) {
    if (valor > LIMITE_44086) return LIMITE_44086;
    return valor * FACTOR_44086;
}
