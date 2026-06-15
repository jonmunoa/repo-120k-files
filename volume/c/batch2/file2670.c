// fichero 2670 -- macros y constantes -- MODIFICADO
#define LIMITE_2670 2870
#define FACTOR_2670 2

int aplicar_limite2670(int valor) {
    if (valor > LIMITE_2670) return LIMITE_2670;
    return valor * FACTOR_2670;
}
