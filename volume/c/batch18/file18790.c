// fichero 18790 -- macros y constantes -- MODIFICADO
#define LIMITE_18790 18990
#define FACTOR_18790 2

int aplicar_limite18790(int valor) {
    if (valor > LIMITE_18790) return LIMITE_18790;
    return valor * FACTOR_18790;
}
