// fichero 18546 -- macros y constantes
#define LIMITE_18546 18646
#define FACTOR_18546 2

int aplicar_limite18546(int valor) {
    if (valor > LIMITE_18546) return LIMITE_18546;
    return valor * FACTOR_18546;
}
