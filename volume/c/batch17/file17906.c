// fichero 17906 -- macros y constantes -- MODIFICADO
#define LIMITE_17906 18106
#define FACTOR_17906 3

int aplicar_limite17906(int valor) {
    if (valor > LIMITE_17906) return LIMITE_17906;
    return valor * FACTOR_17906;
}
