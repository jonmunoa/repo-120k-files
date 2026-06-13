// fichero 54198 -- macros y constantes
#define LIMITE_54198 54298
#define FACTOR_54198 4

int aplicar_limite54198(int valor) {
    if (valor > LIMITE_54198) return LIMITE_54198;
    return valor * FACTOR_54198;
}
