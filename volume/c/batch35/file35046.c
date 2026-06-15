// fichero 35046 -- macros y constantes -- MODIFICADO
#define LIMITE_35046 35246
#define FACTOR_35046 3

int aplicar_limite35046(int valor) {
    if (valor > LIMITE_35046) return LIMITE_35046;
    return valor * FACTOR_35046;
}
