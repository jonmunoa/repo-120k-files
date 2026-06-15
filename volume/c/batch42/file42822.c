// fichero 42822 -- macros y constantes -- MODIFICADO
#define LIMITE_42822 43022
#define FACTOR_42822 4

int aplicar_limite42822(int valor) {
    if (valor > LIMITE_42822) return LIMITE_42822;
    return valor * FACTOR_42822;
}
