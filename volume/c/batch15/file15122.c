// fichero 15122 -- macros y constantes -- MODIFICADO
#define LIMITE_15122 15322
#define FACTOR_15122 4

int aplicar_limite15122(int valor) {
    if (valor > LIMITE_15122) return LIMITE_15122;
    return valor * FACTOR_15122;
}
