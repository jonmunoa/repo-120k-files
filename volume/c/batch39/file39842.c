// fichero 39842 -- macros y constantes -- MODIFICADO
#define LIMITE_39842 40042
#define FACTOR_39842 4

int aplicar_limite39842(int valor) {
    if (valor > LIMITE_39842) return LIMITE_39842;
    return valor * FACTOR_39842;
}
