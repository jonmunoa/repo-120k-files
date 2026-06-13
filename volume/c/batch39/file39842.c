// fichero 39842 -- macros y constantes
#define LIMITE_39842 39942
#define FACTOR_39842 3

int aplicar_limite39842(int valor) {
    if (valor > LIMITE_39842) return LIMITE_39842;
    return valor * FACTOR_39842;
}
