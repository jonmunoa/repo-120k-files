// fichero 5118 -- macros y constantes -- MODIFICADO
#define LIMITE_5118 5318
#define FACTOR_5118 5

int aplicar_limite5118(int valor) {
    if (valor > LIMITE_5118) return LIMITE_5118;
    return valor * FACTOR_5118;
}
