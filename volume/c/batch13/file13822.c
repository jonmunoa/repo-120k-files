// fichero 13822 -- macros y constantes
#define LIMITE_13822 13922
#define FACTOR_13822 3

int aplicar_limite13822(int valor) {
    if (valor > LIMITE_13822) return LIMITE_13822;
    return valor * FACTOR_13822;
}
