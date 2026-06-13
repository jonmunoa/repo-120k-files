// fichero 23066 -- macros y constantes
#define LIMITE_23066 23166
#define FACTOR_23066 2

int aplicar_limite23066(int valor) {
    if (valor > LIMITE_23066) return LIMITE_23066;
    return valor * FACTOR_23066;
}
