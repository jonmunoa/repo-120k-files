// fichero 48886 -- macros y constantes
#define LIMITE_48886 48986
#define FACTOR_48886 2

int aplicar_limite48886(int valor) {
    if (valor > LIMITE_48886) return LIMITE_48886;
    return valor * FACTOR_48886;
}
