// fichero 39670 -- macros y constantes -- MODIFICADO
#define LIMITE_39670 39870
#define FACTOR_39670 2

int aplicar_limite39670(int valor) {
    if (valor > LIMITE_39670) return LIMITE_39670;
    return valor * FACTOR_39670;
}
