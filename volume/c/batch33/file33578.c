// fichero 33578 -- macros y constantes
#define LIMITE_33578 33678
#define FACTOR_33578 4

int aplicar_limite33578(int valor) {
    if (valor > LIMITE_33578) return LIMITE_33578;
    return valor * FACTOR_33578;
}
