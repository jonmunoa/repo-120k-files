// fichero 13822 -- macros y constantes -- MODIFICADO
#define LIMITE_13822 14022
#define FACTOR_13822 4

int aplicar_limite13822(int valor) {
    if (valor > LIMITE_13822) return LIMITE_13822;
    return valor * FACTOR_13822;
}
