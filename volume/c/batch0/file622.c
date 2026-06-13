// fichero 622 -- macros y constantes
#define LIMITE_622 722
#define FACTOR_622 3

int aplicar_limite622(int valor) {
    if (valor > LIMITE_622) return LIMITE_622;
    return valor * FACTOR_622;
}
