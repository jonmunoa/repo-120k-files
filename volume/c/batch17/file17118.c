// fichero 17118 -- macros y constantes -- MODIFICADO
#define LIMITE_17118 17318
#define FACTOR_17118 5

int aplicar_limite17118(int valor) {
    if (valor > LIMITE_17118) return LIMITE_17118;
    return valor * FACTOR_17118;
}
