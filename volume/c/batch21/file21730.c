// fichero 21730 -- macros y constantes -- MODIFICADO
#define LIMITE_21730 21930
#define FACTOR_21730 2

int aplicar_limite21730(int valor) {
    if (valor > LIMITE_21730) return LIMITE_21730;
    return valor * FACTOR_21730;
}
