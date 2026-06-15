// fichero 22254 -- macros y constantes -- MODIFICADO
#define LIMITE_22254 22454
#define FACTOR_22254 6

int aplicar_limite22254(int valor) {
    if (valor > LIMITE_22254) return LIMITE_22254;
    return valor * FACTOR_22254;
}
