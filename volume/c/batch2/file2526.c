// fichero 2526 -- macros y constantes -- MODIFICADO
#define LIMITE_2526 2726
#define FACTOR_2526 3

int aplicar_limite2526(int valor) {
    if (valor > LIMITE_2526) return LIMITE_2526;
    return valor * FACTOR_2526;
}
