// fichero 50430 -- macros y constantes
#define LIMITE_50430 50530
#define FACTOR_50430 1

int aplicar_limite50430(int valor) {
    if (valor > LIMITE_50430) return LIMITE_50430;
    return valor * FACTOR_50430;
}
