// fichero 27822 -- macros y constantes -- MODIFICADO
#define LIMITE_27822 28022
#define FACTOR_27822 4

int aplicar_limite27822(int valor) {
    if (valor > LIMITE_27822) return LIMITE_27822;
    return valor * FACTOR_27822;
}
