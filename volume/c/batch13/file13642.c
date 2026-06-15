// fichero 13642 -- macros y constantes -- MODIFICADO
#define LIMITE_13642 13842
#define FACTOR_13642 4

int aplicar_limite13642(int valor) {
    if (valor > LIMITE_13642) return LIMITE_13642;
    return valor * FACTOR_13642;
}
