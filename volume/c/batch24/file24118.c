// fichero 24118 -- macros y constantes -- MODIFICADO
#define LIMITE_24118 24318
#define FACTOR_24118 5

int aplicar_limite24118(int valor) {
    if (valor > LIMITE_24118) return LIMITE_24118;
    return valor * FACTOR_24118;
}
