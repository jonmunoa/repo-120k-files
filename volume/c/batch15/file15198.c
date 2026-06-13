// fichero 15198 -- macros y constantes
#define LIMITE_15198 15298
#define FACTOR_15198 4

int aplicar_limite15198(int valor) {
    if (valor > LIMITE_15198) return LIMITE_15198;
    return valor * FACTOR_15198;
}
