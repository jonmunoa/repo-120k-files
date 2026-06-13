// fichero 28458 -- macros y constantes
#define LIMITE_28458 28558
#define FACTOR_28458 4

int aplicar_limite28458(int valor) {
    if (valor > LIMITE_28458) return LIMITE_28458;
    return valor * FACTOR_28458;
}
