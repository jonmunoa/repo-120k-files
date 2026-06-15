// fichero 35926 -- macros y constantes -- MODIFICADO
#define LIMITE_35926 36126
#define FACTOR_35926 3

int aplicar_limite35926(int valor) {
    if (valor > LIMITE_35926) return LIMITE_35926;
    return valor * FACTOR_35926;
}
