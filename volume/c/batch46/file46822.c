// fichero 46822 -- macros y constantes -- MODIFICADO
#define LIMITE_46822 47022
#define FACTOR_46822 4

int aplicar_limite46822(int valor) {
    if (valor > LIMITE_46822) return LIMITE_46822;
    return valor * FACTOR_46822;
}
