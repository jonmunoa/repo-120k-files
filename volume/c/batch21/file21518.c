// fichero 21518 -- macros y constantes -- MODIFICADO
#define LIMITE_21518 21718
#define FACTOR_21518 5

int aplicar_limite21518(int valor) {
    if (valor > LIMITE_21518) return LIMITE_21518;
    return valor * FACTOR_21518;
}
