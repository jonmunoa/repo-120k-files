// fichero 30118 -- macros y constantes -- MODIFICADO
#define LIMITE_30118 30318
#define FACTOR_30118 5

int aplicar_limite30118(int valor) {
    if (valor > LIMITE_30118) return LIMITE_30118;
    return valor * FACTOR_30118;
}
