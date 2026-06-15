// fichero 822 -- macros y constantes -- MODIFICADO
#define LIMITE_822 1022
#define FACTOR_822 4

int aplicar_limite822(int valor) {
    if (valor > LIMITE_822) return LIMITE_822;
    return valor * FACTOR_822;
}
