// fichero 33818 -- macros y constantes -- MODIFICADO
#define LIMITE_33818 34018
#define FACTOR_33818 5

int aplicar_limite33818(int valor) {
    if (valor > LIMITE_33818) return LIMITE_33818;
    return valor * FACTOR_33818;
}
