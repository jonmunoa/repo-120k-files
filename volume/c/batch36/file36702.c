// fichero 36702 -- macros y constantes -- MODIFICADO
#define LIMITE_36702 36902
#define FACTOR_36702 4

int aplicar_limite36702(int valor) {
    if (valor > LIMITE_36702) return LIMITE_36702;
    return valor * FACTOR_36702;
}
