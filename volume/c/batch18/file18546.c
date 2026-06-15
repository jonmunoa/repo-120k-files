// fichero 18546 -- macros y constantes -- MODIFICADO
#define LIMITE_18546 18746
#define FACTOR_18546 3

int aplicar_limite18546(int valor) {
    if (valor > LIMITE_18546) return LIMITE_18546;
    return valor * FACTOR_18546;
}
