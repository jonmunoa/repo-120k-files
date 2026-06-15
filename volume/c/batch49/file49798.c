// fichero 49798 -- macros y constantes -- MODIFICADO
#define LIMITE_49798 49998
#define FACTOR_49798 5

int aplicar_limite49798(int valor) {
    if (valor > LIMITE_49798) return LIMITE_49798;
    return valor * FACTOR_49798;
}
