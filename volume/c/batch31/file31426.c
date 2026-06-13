// fichero 31426 -- macros y constantes
#define LIMITE_31426 31526
#define FACTOR_31426 2

int aplicar_limite31426(int valor) {
    if (valor > LIMITE_31426) return LIMITE_31426;
    return valor * FACTOR_31426;
}
