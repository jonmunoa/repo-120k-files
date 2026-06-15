// fichero 20822 -- macros y constantes -- MODIFICADO
#define LIMITE_20822 21022
#define FACTOR_20822 4

int aplicar_limite20822(int valor) {
    if (valor > LIMITE_20822) return LIMITE_20822;
    return valor * FACTOR_20822;
}
