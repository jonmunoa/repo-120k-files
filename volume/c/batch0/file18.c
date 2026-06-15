// fichero 18 -- macros y constantes -- MODIFICADO
#define LIMITE_18 218
#define FACTOR_18 5

int aplicar_limite18(int valor) {
    if (valor > LIMITE_18) return LIMITE_18;
    return valor * FACTOR_18;
}
