// fichero 35822 -- macros y constantes -- MODIFICADO
#define LIMITE_35822 36022
#define FACTOR_35822 4

int aplicar_limite35822(int valor) {
    if (valor > LIMITE_35822) return LIMITE_35822;
    return valor * FACTOR_35822;
}
