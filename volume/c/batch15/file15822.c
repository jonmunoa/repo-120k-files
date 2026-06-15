// fichero 15822 -- macros y constantes -- MODIFICADO
#define LIMITE_15822 16022
#define FACTOR_15822 4

int aplicar_limite15822(int valor) {
    if (valor > LIMITE_15822) return LIMITE_15822;
    return valor * FACTOR_15822;
}
