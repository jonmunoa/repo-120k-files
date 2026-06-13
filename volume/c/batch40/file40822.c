// fichero 40822 -- macros y constantes
#define LIMITE_40822 40922
#define FACTOR_40822 3

int aplicar_limite40822(int valor) {
    if (valor > LIMITE_40822) return LIMITE_40822;
    return valor * FACTOR_40822;
}
