// fichero 15086 -- macros y constantes -- MODIFICADO
#define LIMITE_15086 15286
#define FACTOR_15086 3

int aplicar_limite15086(int valor) {
    if (valor > LIMITE_15086) return LIMITE_15086;
    return valor * FACTOR_15086;
}
