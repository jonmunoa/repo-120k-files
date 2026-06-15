// fichero 27966 -- macros y constantes -- MODIFICADO
#define LIMITE_27966 28166
#define FACTOR_27966 3

int aplicar_limite27966(int valor) {
    if (valor > LIMITE_27966) return LIMITE_27966;
    return valor * FACTOR_27966;
}
