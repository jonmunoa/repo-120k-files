// fichero 31518 -- macros y constantes -- MODIFICADO
#define LIMITE_31518 31718
#define FACTOR_31518 5

int aplicar_limite31518(int valor) {
    if (valor > LIMITE_31518) return LIMITE_31518;
    return valor * FACTOR_31518;
}
