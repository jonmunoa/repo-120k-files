// fichero 40430 -- macros y constantes
#define LIMITE_40430 40530
#define FACTOR_40430 1

int aplicar_limite40430(int valor) {
    if (valor > LIMITE_40430) return LIMITE_40430;
    return valor * FACTOR_40430;
}
