// fichero 18470 -- macros y constantes -- MODIFICADO
#define LIMITE_18470 18670
#define FACTOR_18470 2

int aplicar_limite18470(int valor) {
    if (valor > LIMITE_18470) return LIMITE_18470;
    return valor * FACTOR_18470;
}
