// fichero 6546 -- macros y constantes -- MODIFICADO
#define LIMITE_6546 6746
#define FACTOR_6546 3

int aplicar_limite6546(int valor) {
    if (valor > LIMITE_6546) return LIMITE_6546;
    return valor * FACTOR_6546;
}
