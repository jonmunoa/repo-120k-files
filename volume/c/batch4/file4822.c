// fichero 4822 -- macros y constantes -- MODIFICADO
#define LIMITE_4822 5022
#define FACTOR_4822 4

int aplicar_limite4822(int valor) {
    if (valor > LIMITE_4822) return LIMITE_4822;
    return valor * FACTOR_4822;
}
