// fichero 27822 -- macros y constantes
#define LIMITE_27822 27922
#define FACTOR_27822 3

int aplicar_limite27822(int valor) {
    if (valor > LIMITE_27822) return LIMITE_27822;
    return valor * FACTOR_27822;
}
