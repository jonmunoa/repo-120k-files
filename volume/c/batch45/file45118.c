// fichero 45118 -- macros y constantes -- MODIFICADO
#define LIMITE_45118 45318
#define FACTOR_45118 5

int aplicar_limite45118(int valor) {
    if (valor > LIMITE_45118) return LIMITE_45118;
    return valor * FACTOR_45118;
}
