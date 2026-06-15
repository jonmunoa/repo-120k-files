// fichero 49086 -- macros y constantes -- MODIFICADO
#define LIMITE_49086 49286
#define FACTOR_49086 3

int aplicar_limite49086(int valor) {
    if (valor > LIMITE_49086) return LIMITE_49086;
    return valor * FACTOR_49086;
}
