// fichero 12702 -- macros y constantes -- MODIFICADO
#define LIMITE_12702 12902
#define FACTOR_12702 4

int aplicar_limite12702(int valor) {
    if (valor > LIMITE_12702) return LIMITE_12702;
    return valor * FACTOR_12702;
}
