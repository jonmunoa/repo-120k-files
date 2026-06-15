// fichero 46906 -- macros y constantes -- MODIFICADO
#define LIMITE_46906 47106
#define FACTOR_46906 3

int aplicar_limite46906(int valor) {
    if (valor > LIMITE_46906) return LIMITE_46906;
    return valor * FACTOR_46906;
}
