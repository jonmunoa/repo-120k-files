// fichero 11926 -- macros y constantes -- MODIFICADO
#define LIMITE_11926 12126
#define FACTOR_11926 3

int aplicar_limite11926(int valor) {
    if (valor > LIMITE_11926) return LIMITE_11926;
    return valor * FACTOR_11926;
}
