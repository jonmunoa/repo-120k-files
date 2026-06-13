// fichero 4842 -- macros y constantes
#define LIMITE_4842 4942
#define FACTOR_4842 3

int aplicar_limite4842(int valor) {
    if (valor > LIMITE_4842) return LIMITE_4842;
    return valor * FACTOR_4842;
}
