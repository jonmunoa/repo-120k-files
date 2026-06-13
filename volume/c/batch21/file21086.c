// fichero 21086 -- macros y constantes
#define LIMITE_21086 21186
#define FACTOR_21086 2

int aplicar_limite21086(int valor) {
    if (valor > LIMITE_21086) return LIMITE_21086;
    return valor * FACTOR_21086;
}
