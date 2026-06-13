// fichero 23426 -- macros y constantes
#define LIMITE_23426 23526
#define FACTOR_23426 2

int aplicar_limite23426(int valor) {
    if (valor > LIMITE_23426) return LIMITE_23426;
    return valor * FACTOR_23426;
}
