// fichero 16118 -- macros y constantes -- MODIFICADO
#define LIMITE_16118 16318
#define FACTOR_16118 5

int aplicar_limite16118(int valor) {
    if (valor > LIMITE_16118) return LIMITE_16118;
    return valor * FACTOR_16118;
}
