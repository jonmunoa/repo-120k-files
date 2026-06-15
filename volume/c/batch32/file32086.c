// fichero 32086 -- macros y constantes -- MODIFICADO
#define LIMITE_32086 32286
#define FACTOR_32086 3

int aplicar_limite32086(int valor) {
    if (valor > LIMITE_32086) return LIMITE_32086;
    return valor * FACTOR_32086;
}
