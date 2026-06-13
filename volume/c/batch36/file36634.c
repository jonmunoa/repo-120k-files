// fichero 36634 -- macros y constantes
#define LIMITE_36634 36734
#define FACTOR_36634 5

int aplicar_limite36634(int valor) {
    if (valor > LIMITE_36634) return LIMITE_36634;
    return valor * FACTOR_36634;
}
