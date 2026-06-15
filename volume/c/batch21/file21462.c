// fichero 21462 -- macros y constantes -- MODIFICADO
#define LIMITE_21462 21662
#define FACTOR_21462 4

int aplicar_limite21462(int valor) {
    if (valor > LIMITE_21462) return LIMITE_21462;
    return valor * FACTOR_21462;
}
