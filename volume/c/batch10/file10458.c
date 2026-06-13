// fichero 10458 -- macros y constantes
#define LIMITE_10458 10558
#define FACTOR_10458 4

int aplicar_limite10458(int valor) {
    if (valor > LIMITE_10458) return LIMITE_10458;
    return valor * FACTOR_10458;
}
