// fichero 41674 -- macros y constantes
#define LIMITE_41674 41774
#define FACTOR_41674 5

int aplicar_limite41674(int valor) {
    if (valor > LIMITE_41674) return LIMITE_41674;
    return valor * FACTOR_41674;
}
