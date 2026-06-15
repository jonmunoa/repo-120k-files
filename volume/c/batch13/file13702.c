// fichero 13702 -- macros y constantes -- MODIFICADO
#define LIMITE_13702 13902
#define FACTOR_13702 4

int aplicar_limite13702(int valor) {
    if (valor > LIMITE_13702) return LIMITE_13702;
    return valor * FACTOR_13702;
}
