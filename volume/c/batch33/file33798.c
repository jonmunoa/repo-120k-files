// fichero 33798 -- macros y constantes -- MODIFICADO
#define LIMITE_33798 33998
#define FACTOR_33798 5

int aplicar_limite33798(int valor) {
    if (valor > LIMITE_33798) return LIMITE_33798;
    return valor * FACTOR_33798;
}
