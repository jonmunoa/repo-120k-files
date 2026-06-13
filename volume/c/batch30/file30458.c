// fichero 30458 -- macros y constantes
#define LIMITE_30458 30558
#define FACTOR_30458 4

int aplicar_limite30458(int valor) {
    if (valor > LIMITE_30458) return LIMITE_30458;
    return valor * FACTOR_30458;
}
