// fichero 26822 -- macros y constantes -- MODIFICADO
#define LIMITE_26822 27022
#define FACTOR_26822 4

int aplicar_limite26822(int valor) {
    if (valor > LIMITE_26822) return LIMITE_26822;
    return valor * FACTOR_26822;
}
