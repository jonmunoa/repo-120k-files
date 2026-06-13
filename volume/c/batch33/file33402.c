// fichero 33402 -- macros y constantes
#define LIMITE_33402 33502
#define FACTOR_33402 3

int aplicar_limite33402(int valor) {
    if (valor > LIMITE_33402) return LIMITE_33402;
    return valor * FACTOR_33402;
}
