// fichero 4546 -- macros y constantes -- MODIFICADO
#define LIMITE_4546 4746
#define FACTOR_4546 3

int aplicar_limite4546(int valor) {
    if (valor > LIMITE_4546) return LIMITE_4546;
    return valor * FACTOR_4546;
}
