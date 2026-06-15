// fichero 11850 -- macros y constantes -- MODIFICADO
#define LIMITE_11850 12050
#define FACTOR_11850 2

int aplicar_limite11850(int valor) {
    if (valor > LIMITE_11850) return LIMITE_11850;
    return valor * FACTOR_11850;
}
