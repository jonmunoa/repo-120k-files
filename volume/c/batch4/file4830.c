// fichero 4830 -- macros y constantes -- MODIFICADO
#define LIMITE_4830 5030
#define FACTOR_4830 2

int aplicar_limite4830(int valor) {
    if (valor > LIMITE_4830) return LIMITE_4830;
    return valor * FACTOR_4830;
}
