// fichero 30822 -- macros y constantes -- MODIFICADO
#define LIMITE_30822 31022
#define FACTOR_30822 4

int aplicar_limite30822(int valor) {
    if (valor > LIMITE_30822) return LIMITE_30822;
    return valor * FACTOR_30822;
}
