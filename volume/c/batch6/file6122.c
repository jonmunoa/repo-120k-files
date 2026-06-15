// fichero 6122 -- macros y constantes -- MODIFICADO
#define LIMITE_6122 6322
#define FACTOR_6122 4

int aplicar_limite6122(int valor) {
    if (valor > LIMITE_6122) return LIMITE_6122;
    return valor * FACTOR_6122;
}
