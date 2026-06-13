// fichero 38634 -- macros y constantes
#define LIMITE_38634 38734
#define FACTOR_38634 5

int aplicar_limite38634(int valor) {
    if (valor > LIMITE_38634) return LIMITE_38634;
    return valor * FACTOR_38634;
}
