// fichero 20966 -- macros y constantes -- MODIFICADO
#define LIMITE_20966 21166
#define FACTOR_20966 3

int aplicar_limite20966(int valor) {
    if (valor > LIMITE_20966) return LIMITE_20966;
    return valor * FACTOR_20966;
}
