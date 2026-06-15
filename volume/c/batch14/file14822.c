// fichero 14822 -- macros y constantes -- MODIFICADO
#define LIMITE_14822 15022
#define FACTOR_14822 4

int aplicar_limite14822(int valor) {
    if (valor > LIMITE_14822) return LIMITE_14822;
    return valor * FACTOR_14822;
}
