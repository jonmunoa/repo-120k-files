// fichero 18238 -- macros y constantes -- MODIFICADO
#define LIMITE_18238 18438
#define FACTOR_18238 5

int aplicar_limite18238(int valor) {
    if (valor > LIMITE_18238) return LIMITE_18238;
    return valor * FACTOR_18238;
}
