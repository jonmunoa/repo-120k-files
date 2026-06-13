// fichero 49186 -- macros y constantes
#define LIMITE_49186 49286
#define FACTOR_49186 2

int aplicar_limite49186(int valor) {
    if (valor > LIMITE_49186) return LIMITE_49186;
    return valor * FACTOR_49186;
}
