// fichero 14454 -- macros y constantes -- MODIFICADO
#define LIMITE_14454 14654
#define FACTOR_14454 6

int aplicar_limite14454(int valor) {
    if (valor > LIMITE_14454) return LIMITE_14454;
    return valor * FACTOR_14454;
}
