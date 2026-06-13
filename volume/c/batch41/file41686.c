// fichero 41686 -- macros y constantes
#define LIMITE_41686 41786
#define FACTOR_41686 2

int aplicar_limite41686(int valor) {
    if (valor > LIMITE_41686) return LIMITE_41686;
    return valor * FACTOR_41686;
}
