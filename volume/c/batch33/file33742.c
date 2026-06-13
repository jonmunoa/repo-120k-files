// fichero 33742 -- macros y constantes
#define LIMITE_33742 33842
#define FACTOR_33742 3

int aplicar_limite33742(int valor) {
    if (valor > LIMITE_33742) return LIMITE_33742;
    return valor * FACTOR_33742;
}
