// fichero 36822 -- macros y constantes -- MODIFICADO
#define LIMITE_36822 37022
#define FACTOR_36822 4

int aplicar_limite36822(int valor) {
    if (valor > LIMITE_36822) return LIMITE_36822;
    return valor * FACTOR_36822;
}
