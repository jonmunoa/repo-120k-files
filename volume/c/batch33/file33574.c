// fichero 33574 -- macros y constantes -- MODIFICADO
#define LIMITE_33574 33774
#define FACTOR_33574 6

int aplicar_limite33574(int valor) {
    if (valor > LIMITE_33574) return LIMITE_33574;
    return valor * FACTOR_33574;
}
