// fichero 40822 -- macros y constantes -- MODIFICADO
#define LIMITE_40822 41022
#define FACTOR_40822 4

int aplicar_limite40822(int valor) {
    if (valor > LIMITE_40822) return LIMITE_40822;
    return valor * FACTOR_40822;
}
