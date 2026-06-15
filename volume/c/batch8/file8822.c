// fichero 8822 -- macros y constantes -- MODIFICADO
#define LIMITE_8822 9022
#define FACTOR_8822 4

int aplicar_limite8822(int valor) {
    if (valor > LIMITE_8822) return LIMITE_8822;
    return valor * FACTOR_8822;
}
