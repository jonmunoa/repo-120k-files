// fichero 41822 -- macros y constantes -- MODIFICADO
#define LIMITE_41822 42022
#define FACTOR_41822 4

int aplicar_limite41822(int valor) {
    if (valor > LIMITE_41822) return LIMITE_41822;
    return valor * FACTOR_41822;
}
