// fichero 18046 -- macros y constantes -- MODIFICADO
#define LIMITE_18046 18246
#define FACTOR_18046 3

int aplicar_limite18046(int valor) {
    if (valor > LIMITE_18046) return LIMITE_18046;
    return valor * FACTOR_18046;
}
