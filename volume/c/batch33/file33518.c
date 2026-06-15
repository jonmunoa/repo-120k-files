// fichero 33518 -- macros y constantes -- MODIFICADO
#define LIMITE_33518 33718
#define FACTOR_33518 5

int aplicar_limite33518(int valor) {
    if (valor > LIMITE_33518) return LIMITE_33518;
    return valor * FACTOR_33518;
}
