// fichero 33590 -- macros y constantes -- MODIFICADO
#define LIMITE_33590 33790
#define FACTOR_33590 2

int aplicar_limite33590(int valor) {
    if (valor > LIMITE_33590) return LIMITE_33590;
    return valor * FACTOR_33590;
}
