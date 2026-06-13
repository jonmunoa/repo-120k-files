// fichero 23926 -- macros y constantes
#define LIMITE_23926 24026
#define FACTOR_23926 2

int aplicar_limite23926(int valor) {
    if (valor > LIMITE_23926) return LIMITE_23926;
    return valor * FACTOR_23926;
}
