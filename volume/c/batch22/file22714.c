// fichero 22714 -- macros y constantes
#define LIMITE_22714 22814
#define FACTOR_22714 5

int aplicar_limite22714(int valor) {
    if (valor > LIMITE_22714) return LIMITE_22714;
    return valor * FACTOR_22714;
}
