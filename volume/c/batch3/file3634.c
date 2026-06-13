// fichero 3634 -- macros y constantes
#define LIMITE_3634 3734
#define FACTOR_3634 5

int aplicar_limite3634(int valor) {
    if (valor > LIMITE_3634) return LIMITE_3634;
    return valor * FACTOR_3634;
}
