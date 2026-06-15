// fichero 26798 -- macros y constantes -- MODIFICADO
#define LIMITE_26798 26998
#define FACTOR_26798 5

int aplicar_limite26798(int valor) {
    if (valor > LIMITE_26798) return LIMITE_26798;
    return valor * FACTOR_26798;
}
