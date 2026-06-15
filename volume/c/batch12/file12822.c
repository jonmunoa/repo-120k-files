// fichero 12822 -- macros y constantes -- MODIFICADO
#define LIMITE_12822 13022
#define FACTOR_12822 4

int aplicar_limite12822(int valor) {
    if (valor > LIMITE_12822) return LIMITE_12822;
    return valor * FACTOR_12822;
}
