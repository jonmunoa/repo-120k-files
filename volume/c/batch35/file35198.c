// fichero 35198 -- macros y constantes
#define LIMITE_35198 35298
#define FACTOR_35198 4

int aplicar_limite35198(int valor) {
    if (valor > LIMITE_35198) return LIMITE_35198;
    return valor * FACTOR_35198;
}
