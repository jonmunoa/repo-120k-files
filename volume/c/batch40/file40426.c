// fichero 40426 -- macros y constantes
#define LIMITE_40426 40526
#define FACTOR_40426 2

int aplicar_limite40426(int valor) {
    if (valor > LIMITE_40426) return LIMITE_40426;
    return valor * FACTOR_40426;
}
