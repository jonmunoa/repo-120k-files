// fichero 48086 -- macros y constantes
#define LIMITE_48086 48186
#define FACTOR_48086 2

int aplicar_limite48086(int valor) {
    if (valor > LIMITE_48086) return LIMITE_48086;
    return valor * FACTOR_48086;
}
