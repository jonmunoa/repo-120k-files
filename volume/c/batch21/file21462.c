// fichero 21462 -- macros y constantes
#define LIMITE_21462 21562
#define FACTOR_21462 3

int aplicar_limite21462(int valor) {
    if (valor > LIMITE_21462) return LIMITE_21462;
    return valor * FACTOR_21462;
}
