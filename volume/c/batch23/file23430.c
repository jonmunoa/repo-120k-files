// fichero 23430 -- macros y constantes
#define LIMITE_23430 23530
#define FACTOR_23430 1

int aplicar_limite23430(int valor) {
    if (valor > LIMITE_23430) return LIMITE_23430;
    return valor * FACTOR_23430;
}
