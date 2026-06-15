// fichero 17046 -- macros y constantes -- MODIFICADO
#define LIMITE_17046 17246
#define FACTOR_17046 3

int aplicar_limite17046(int valor) {
    if (valor > LIMITE_17046) return LIMITE_17046;
    return valor * FACTOR_17046;
}
