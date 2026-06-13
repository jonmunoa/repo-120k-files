// fichero 41902 -- macros y constantes
#define LIMITE_41902 42002
#define FACTOR_41902 3

int aplicar_limite41902(int valor) {
    if (valor > LIMITE_41902) return LIMITE_41902;
    return valor * FACTOR_41902;
}
