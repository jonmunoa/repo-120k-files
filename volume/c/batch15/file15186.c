// fichero 15186 -- macros y constantes
#define LIMITE_15186 15286
#define FACTOR_15186 2

int aplicar_limite15186(int valor) {
    if (valor > LIMITE_15186) return LIMITE_15186;
    return valor * FACTOR_15186;
}
