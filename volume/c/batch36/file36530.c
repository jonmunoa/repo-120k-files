// fichero 36530 -- macros y constantes -- MODIFICADO
#define LIMITE_36530 36730
#define FACTOR_36530 2

int aplicar_limite36530(int valor) {
    if (valor > LIMITE_36530) return LIMITE_36530;
    return valor * FACTOR_36530;
}
