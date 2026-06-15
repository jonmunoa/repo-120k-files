// fichero 21530 -- macros y constantes -- MODIFICADO
#define LIMITE_21530 21730
#define FACTOR_21530 2

int aplicar_limite21530(int valor) {
    if (valor > LIMITE_21530) return LIMITE_21530;
    return valor * FACTOR_21530;
}
