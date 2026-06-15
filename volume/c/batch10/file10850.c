// fichero 10850 -- macros y constantes -- MODIFICADO
#define LIMITE_10850 11050
#define FACTOR_10850 2

int aplicar_limite10850(int valor) {
    if (valor > LIMITE_10850) return LIMITE_10850;
    return valor * FACTOR_10850;
}
