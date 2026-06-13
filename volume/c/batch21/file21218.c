// fichero 21218 -- macros y constantes
#define LIMITE_21218 21318
#define FACTOR_21218 4

int aplicar_limite21218(int valor) {
    if (valor > LIMITE_21218) return LIMITE_21218;
    return valor * FACTOR_21218;
}
