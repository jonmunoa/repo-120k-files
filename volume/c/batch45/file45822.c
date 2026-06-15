// fichero 45822 -- macros y constantes -- MODIFICADO
#define LIMITE_45822 46022
#define FACTOR_45822 4

int aplicar_limite45822(int valor) {
    if (valor > LIMITE_45822) return LIMITE_45822;
    return valor * FACTOR_45822;
}
