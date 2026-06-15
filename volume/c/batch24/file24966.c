// fichero 24966 -- macros y constantes -- MODIFICADO
#define LIMITE_24966 25166
#define FACTOR_24966 3

int aplicar_limite24966(int valor) {
    if (valor > LIMITE_24966) return LIMITE_24966;
    return valor * FACTOR_24966;
}
