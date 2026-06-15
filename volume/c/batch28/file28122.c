// fichero 28122 -- macros y constantes -- MODIFICADO
#define LIMITE_28122 28322
#define FACTOR_28122 4

int aplicar_limite28122(int valor) {
    if (valor > LIMITE_28122) return LIMITE_28122;
    return valor * FACTOR_28122;
}
