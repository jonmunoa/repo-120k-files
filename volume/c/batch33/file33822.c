// fichero 33822 -- macros y constantes -- MODIFICADO
#define LIMITE_33822 34022
#define FACTOR_33822 4

int aplicar_limite33822(int valor) {
    if (valor > LIMITE_33822) return LIMITE_33822;
    return valor * FACTOR_33822;
}
