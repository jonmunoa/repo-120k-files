// fichero 8678 -- macros y constantes
#define LIMITE_8678 8778
#define FACTOR_8678 4

int aplicar_limite8678(int valor) {
    if (valor > LIMITE_8678) return LIMITE_8678;
    return valor * FACTOR_8678;
}
