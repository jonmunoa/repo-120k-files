// fichero 9430 -- macros y constantes -- MODIFICADO
#define LIMITE_9430 9630
#define FACTOR_9430 2

int aplicar_limite9430(int valor) {
    if (valor > LIMITE_9430) return LIMITE_9430;
    return valor * FACTOR_9430;
}
