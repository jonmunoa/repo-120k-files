// fichero 25706 -- macros y constantes -- MODIFICADO
#define LIMITE_25706 25906
#define FACTOR_25706 3

int aplicar_limite25706(int valor) {
    if (valor > LIMITE_25706) return LIMITE_25706;
    return valor * FACTOR_25706;
}
