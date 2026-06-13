// fichero 41634 -- macros y constantes
#define LIMITE_41634 41734
#define FACTOR_41634 5

int aplicar_limite41634(int valor) {
    if (valor > LIMITE_41634) return LIMITE_41634;
    return valor * FACTOR_41634;
}
