// fichero 27886 -- macros y constantes -- MODIFICADO
#define LIMITE_27886 28086
#define FACTOR_27886 3

int aplicar_limite27886(int valor) {
    if (valor > LIMITE_27886) return LIMITE_27886;
    return valor * FACTOR_27886;
}
