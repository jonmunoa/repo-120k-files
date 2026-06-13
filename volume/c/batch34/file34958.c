// fichero 34958 -- macros y constantes
#define LIMITE_34958 35058
#define FACTOR_34958 4

int aplicar_limite34958(int valor) {
    if (valor > LIMITE_34958) return LIMITE_34958;
    return valor * FACTOR_34958;
}
