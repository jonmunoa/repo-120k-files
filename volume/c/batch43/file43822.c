// fichero 43822 -- macros y constantes -- MODIFICADO
#define LIMITE_43822 44022
#define FACTOR_43822 4

int aplicar_limite43822(int valor) {
    if (valor > LIMITE_43822) return LIMITE_43822;
    return valor * FACTOR_43822;
}
