// fichero 4458 -- macros y constantes
#define LIMITE_4458 4558
#define FACTOR_4458 4

int aplicar_limite4458(int valor) {
    if (valor > LIMITE_4458) return LIMITE_4458;
    return valor * FACTOR_4458;
}
