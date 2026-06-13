// fichero 21066 -- macros y constantes
#define LIMITE_21066 21166
#define FACTOR_21066 2

int aplicar_limite21066(int valor) {
    if (valor > LIMITE_21066) return LIMITE_21066;
    return valor * FACTOR_21066;
}
