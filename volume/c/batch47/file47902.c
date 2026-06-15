// fichero 47902 -- macros y constantes -- MODIFICADO
#define LIMITE_47902 48102
#define FACTOR_47902 4

int aplicar_limite47902(int valor) {
    if (valor > LIMITE_47902) return LIMITE_47902;
    return valor * FACTOR_47902;
}
