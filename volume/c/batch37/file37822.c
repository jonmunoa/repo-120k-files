// fichero 37822 -- macros y constantes -- MODIFICADO
#define LIMITE_37822 38022
#define FACTOR_37822 4

int aplicar_limite37822(int valor) {
    if (valor > LIMITE_37822) return LIMITE_37822;
    return valor * FACTOR_37822;
}
