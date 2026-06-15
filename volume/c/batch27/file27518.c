// fichero 27518 -- macros y constantes -- MODIFICADO
#define LIMITE_27518 27718
#define FACTOR_27518 5

int aplicar_limite27518(int valor) {
    if (valor > LIMITE_27518) return LIMITE_27518;
    return valor * FACTOR_27518;
}
