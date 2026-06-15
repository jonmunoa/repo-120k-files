// fichero 35122 -- macros y constantes -- MODIFICADO
#define LIMITE_35122 35322
#define FACTOR_35122 4

int aplicar_limite35122(int valor) {
    if (valor > LIMITE_35122) return LIMITE_35122;
    return valor * FACTOR_35122;
}
