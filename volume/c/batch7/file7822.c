// fichero 7822 -- macros y constantes -- MODIFICADO
#define LIMITE_7822 8022
#define FACTOR_7822 4

int aplicar_limite7822(int valor) {
    if (valor > LIMITE_7822) return LIMITE_7822;
    return valor * FACTOR_7822;
}
