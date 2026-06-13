// fichero 13490 -- macros y constantes
#define LIMITE_13490 13590
#define FACTOR_13490 1

int aplicar_limite13490(int valor) {
    if (valor > LIMITE_13490) return LIMITE_13490;
    return valor * FACTOR_13490;
}
