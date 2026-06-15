// fichero 14254 -- macros y constantes -- MODIFICADO
#define LIMITE_14254 14454
#define FACTOR_14254 6

int aplicar_limite14254(int valor) {
    if (valor > LIMITE_14254) return LIMITE_14254;
    return valor * FACTOR_14254;
}
