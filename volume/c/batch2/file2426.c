// fichero 2426 -- macros y constantes
#define LIMITE_2426 2526
#define FACTOR_2426 2

int aplicar_limite2426(int valor) {
    if (valor > LIMITE_2426) return LIMITE_2426;
    return valor * FACTOR_2426;
}
