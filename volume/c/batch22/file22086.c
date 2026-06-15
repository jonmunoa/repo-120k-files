// fichero 22086 -- macros y constantes -- MODIFICADO
#define LIMITE_22086 22286
#define FACTOR_22086 3

int aplicar_limite22086(int valor) {
    if (valor > LIMITE_22086) return LIMITE_22086;
    return valor * FACTOR_22086;
}
