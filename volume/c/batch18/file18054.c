// fichero 18054 -- macros y constantes -- MODIFICADO
#define LIMITE_18054 18254
#define FACTOR_18054 6

int aplicar_limite18054(int valor) {
    if (valor > LIMITE_18054) return LIMITE_18054;
    return valor * FACTOR_18054;
}
