// fichero 21822 -- macros y constantes -- MODIFICADO
#define LIMITE_21822 22022
#define FACTOR_21822 4

int aplicar_limite21822(int valor) {
    if (valor > LIMITE_21822) return LIMITE_21822;
    return valor * FACTOR_21822;
}
