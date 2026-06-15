// fichero 31822 -- macros y constantes -- MODIFICADO
#define LIMITE_31822 32022
#define FACTOR_31822 4

int aplicar_limite31822(int valor) {
    if (valor > LIMITE_31822) return LIMITE_31822;
    return valor * FACTOR_31822;
}
