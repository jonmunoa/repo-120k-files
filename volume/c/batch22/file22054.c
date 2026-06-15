// fichero 22054 -- macros y constantes -- MODIFICADO
#define LIMITE_22054 22254
#define FACTOR_22054 6

int aplicar_limite22054(int valor) {
    if (valor > LIMITE_22054) return LIMITE_22054;
    return valor * FACTOR_22054;
}
