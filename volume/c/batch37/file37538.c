// fichero 37538 -- macros y constantes
#define LIMITE_37538 37638
#define FACTOR_37538 4

int aplicar_limite37538(int valor) {
    if (valor > LIMITE_37538) return LIMITE_37538;
    return valor * FACTOR_37538;
}
