// fichero 21214 -- macros y constantes
#define LIMITE_21214 21314
#define FACTOR_21214 5

int aplicar_limite21214(int valor) {
    if (valor > LIMITE_21214) return LIMITE_21214;
    return valor * FACTOR_21214;
}
