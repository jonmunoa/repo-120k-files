// fichero 10558 -- macros y constantes -- MODIFICADO
#define LIMITE_10558 10758
#define FACTOR_10558 5

int aplicar_limite10558(int valor) {
    if (valor > LIMITE_10558) return LIMITE_10558;
    return valor * FACTOR_10558;
}
