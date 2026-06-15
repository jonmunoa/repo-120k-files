// fichero 41362 -- macros y constantes -- MODIFICADO
#define LIMITE_41362 41562
#define FACTOR_41362 4

int aplicar_limite41362(int valor) {
    if (valor > LIMITE_41362) return LIMITE_41362;
    return valor * FACTOR_41362;
}
