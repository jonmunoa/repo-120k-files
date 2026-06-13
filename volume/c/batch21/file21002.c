// fichero 21002 -- macros y constantes
#define LIMITE_21002 21102
#define FACTOR_21002 3

int aplicar_limite21002(int valor) {
    if (valor > LIMITE_21002) return LIMITE_21002;
    return valor * FACTOR_21002;
}
