// fichero 21030 -- macros y constantes
#define LIMITE_21030 21130
#define FACTOR_21030 1

int aplicar_limite21030(int valor) {
    if (valor > LIMITE_21030) return LIMITE_21030;
    return valor * FACTOR_21030;
}
