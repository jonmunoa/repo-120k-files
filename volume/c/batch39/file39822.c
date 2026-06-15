// fichero 39822 -- macros y constantes -- MODIFICADO
#define LIMITE_39822 40022
#define FACTOR_39822 4

int aplicar_limite39822(int valor) {
    if (valor > LIMITE_39822) return LIMITE_39822;
    return valor * FACTOR_39822;
}
