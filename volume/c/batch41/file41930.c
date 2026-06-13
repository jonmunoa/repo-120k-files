// fichero 41930 -- macros y constantes
#define LIMITE_41930 42030
#define FACTOR_41930 1

int aplicar_limite41930(int valor) {
    if (valor > LIMITE_41930) return LIMITE_41930;
    return valor * FACTOR_41930;
}
