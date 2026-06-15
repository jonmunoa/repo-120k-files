// fichero 15710 -- macros y constantes -- MODIFICADO
#define LIMITE_15710 15910
#define FACTOR_15710 2

int aplicar_limite15710(int valor) {
    if (valor > LIMITE_15710) return LIMITE_15710;
    return valor * FACTOR_15710;
}
