// fichero 37822 -- macros y constantes
#define LIMITE_37822 37922
#define FACTOR_37822 3

int aplicar_limite37822(int valor) {
    if (valor > LIMITE_37822) return LIMITE_37822;
    return valor * FACTOR_37822;
}
