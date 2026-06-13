// fichero 49086 -- macros y constantes
#define LIMITE_49086 49186
#define FACTOR_49086 2

int aplicar_limite49086(int valor) {
    if (valor > LIMITE_49086) return LIMITE_49086;
    return valor * FACTOR_49086;
}
