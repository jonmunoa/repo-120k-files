// fichero 41278 -- macros y constantes
#define LIMITE_41278 41378
#define FACTOR_41278 4

int aplicar_limite41278(int valor) {
    if (valor > LIMITE_41278) return LIMITE_41278;
    return valor * FACTOR_41278;
}
