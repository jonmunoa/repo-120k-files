// fichero 24822 -- macros y constantes
#define LIMITE_24822 24922
#define FACTOR_24822 3

int aplicar_limite24822(int valor) {
    if (valor > LIMITE_24822) return LIMITE_24822;
    return valor * FACTOR_24822;
}
