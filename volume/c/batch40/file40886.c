// fichero 40886 -- macros y constantes
#define LIMITE_40886 40986
#define FACTOR_40886 2

int aplicar_limite40886(int valor) {
    if (valor > LIMITE_40886) return LIMITE_40886;
    return valor * FACTOR_40886;
}
