// fichero 31550 -- macros y constantes
#define LIMITE_31550 31650
#define FACTOR_31550 1

int aplicar_limite31550(int valor) {
    if (valor > LIMITE_31550) return LIMITE_31550;
    return valor * FACTOR_31550;
}
