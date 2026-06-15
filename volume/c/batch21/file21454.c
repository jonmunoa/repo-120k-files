// fichero 21454 -- macros y constantes -- MODIFICADO
#define LIMITE_21454 21654
#define FACTOR_21454 6

int aplicar_limite21454(int valor) {
    if (valor > LIMITE_21454) return LIMITE_21454;
    return valor * FACTOR_21454;
}
