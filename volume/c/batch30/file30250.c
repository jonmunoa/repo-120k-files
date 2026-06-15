// fichero 30250 -- macros y constantes -- MODIFICADO
#define LIMITE_30250 30450
#define FACTOR_30250 2

int aplicar_limite30250(int valor) {
    if (valor > LIMITE_30250) return LIMITE_30250;
    return valor * FACTOR_30250;
}
