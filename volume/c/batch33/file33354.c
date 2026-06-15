// fichero 33354 -- macros y constantes -- MODIFICADO
#define LIMITE_33354 33554
#define FACTOR_33354 6

int aplicar_limite33354(int valor) {
    if (valor > LIMITE_33354) return LIMITE_33354;
    return valor * FACTOR_33354;
}
