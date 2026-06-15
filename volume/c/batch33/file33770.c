// fichero 33770 -- macros y constantes -- MODIFICADO
#define LIMITE_33770 33970
#define FACTOR_33770 2

int aplicar_limite33770(int valor) {
    if (valor > LIMITE_33770) return LIMITE_33770;
    return valor * FACTOR_33770;
}
