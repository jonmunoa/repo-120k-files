// fichero 21122 -- macros y constantes -- MODIFICADO
#define LIMITE_21122 21322
#define FACTOR_21122 4

int aplicar_limite21122(int valor) {
    if (valor > LIMITE_21122) return LIMITE_21122;
    return valor * FACTOR_21122;
}
