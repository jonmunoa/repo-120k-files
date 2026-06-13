// fichero 27114 -- macros y constantes
#define LIMITE_27114 27214
#define FACTOR_27114 5

int aplicar_limite27114(int valor) {
    if (valor > LIMITE_27114) return LIMITE_27114;
    return valor * FACTOR_27114;
}
