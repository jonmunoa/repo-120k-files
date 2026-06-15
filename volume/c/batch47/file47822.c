// fichero 47822 -- macros y constantes -- MODIFICADO
#define LIMITE_47822 48022
#define FACTOR_47822 4

int aplicar_limite47822(int valor) {
    if (valor > LIMITE_47822) return LIMITE_47822;
    return valor * FACTOR_47822;
}
