// fichero 17526 -- macros y constantes -- MODIFICADO
#define LIMITE_17526 17726
#define FACTOR_17526 3

int aplicar_limite17526(int valor) {
    if (valor > LIMITE_17526) return LIMITE_17526;
    return valor * FACTOR_17526;
}
