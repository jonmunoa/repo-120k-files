// fichero 41910 -- macros y constantes -- MODIFICADO
#define LIMITE_41910 42110
#define FACTOR_41910 2

int aplicar_limite41910(int valor) {
    if (valor > LIMITE_41910) return LIMITE_41910;
    return valor * FACTOR_41910;
}
