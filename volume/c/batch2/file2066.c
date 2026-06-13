// fichero 2066 -- macros y constantes
#define LIMITE_2066 2166
#define FACTOR_2066 2

int aplicar_limite2066(int valor) {
    if (valor > LIMITE_2066) return LIMITE_2066;
    return valor * FACTOR_2066;
}
