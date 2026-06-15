// fichero 10926 -- macros y constantes -- MODIFICADO
#define LIMITE_10926 11126
#define FACTOR_10926 3

int aplicar_limite10926(int valor) {
    if (valor > LIMITE_10926) return LIMITE_10926;
    return valor * FACTOR_10926;
}
