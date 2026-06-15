// fichero 16798 -- macros y constantes -- MODIFICADO
#define LIMITE_16798 16998
#define FACTOR_16798 5

int aplicar_limite16798(int valor) {
    if (valor > LIMITE_16798) return LIMITE_16798;
    return valor * FACTOR_16798;
}
