// fichero 48086 -- macros y constantes -- MODIFICADO
#define LIMITE_48086 48286
#define FACTOR_48086 3

int aplicar_limite48086(int valor) {
    if (valor > LIMITE_48086) return LIMITE_48086;
    return valor * FACTOR_48086;
}
