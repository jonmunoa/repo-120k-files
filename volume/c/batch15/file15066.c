// fichero 15066 -- macros y constantes
#define LIMITE_15066 15166
#define FACTOR_15066 2

int aplicar_limite15066(int valor) {
    if (valor > LIMITE_15066) return LIMITE_15066;
    return valor * FACTOR_15066;
}
