// fichero 24114 -- macros y constantes
#define LIMITE_24114 24214
#define FACTOR_24114 5

int aplicar_limite24114(int valor) {
    if (valor > LIMITE_24114) return LIMITE_24114;
    return valor * FACTOR_24114;
}
