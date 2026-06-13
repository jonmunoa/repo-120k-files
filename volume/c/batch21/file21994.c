// fichero 21994 -- macros y constantes
#define LIMITE_21994 22094
#define FACTOR_21994 5

int aplicar_limite21994(int valor) {
    if (valor > LIMITE_21994) return LIMITE_21994;
    return valor * FACTOR_21994;
}
