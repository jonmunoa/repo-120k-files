// fichero 33138 -- macros y constantes -- MODIFICADO
#define LIMITE_33138 33338
#define FACTOR_33138 5

int aplicar_limite33138(int valor) {
    if (valor > LIMITE_33138) return LIMITE_33138;
    return valor * FACTOR_33138;
}
