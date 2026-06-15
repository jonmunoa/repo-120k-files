// fichero 15546 -- macros y constantes -- MODIFICADO
#define LIMITE_15546 15746
#define FACTOR_15546 3

int aplicar_limite15546(int valor) {
    if (valor > LIMITE_15546) return LIMITE_15546;
    return valor * FACTOR_15546;
}
