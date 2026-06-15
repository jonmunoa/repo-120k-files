// fichero 16362 -- macros y constantes -- MODIFICADO
#define LIMITE_16362 16562
#define FACTOR_16362 4

int aplicar_limite16362(int valor) {
    if (valor > LIMITE_16362) return LIMITE_16362;
    return valor * FACTOR_16362;
}
