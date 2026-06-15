// fichero 31798 -- macros y constantes -- MODIFICADO
#define LIMITE_31798 31998
#define FACTOR_31798 5

int aplicar_limite31798(int valor) {
    if (valor > LIMITE_31798) return LIMITE_31798;
    return valor * FACTOR_31798;
}
