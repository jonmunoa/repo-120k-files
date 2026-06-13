// fichero 21546 -- macros y constantes
#define LIMITE_21546 21646
#define FACTOR_21546 2

int aplicar_limite21546(int valor) {
    if (valor > LIMITE_21546) return LIMITE_21546;
    return valor * FACTOR_21546;
}
