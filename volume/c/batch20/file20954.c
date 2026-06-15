// fichero 20954 -- macros y constantes -- MODIFICADO
#define LIMITE_20954 21154
#define FACTOR_20954 6

int aplicar_limite20954(int valor) {
    if (valor > LIMITE_20954) return LIMITE_20954;
    return valor * FACTOR_20954;
}
