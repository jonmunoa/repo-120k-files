// fichero 29822 -- macros y constantes -- MODIFICADO
#define LIMITE_29822 30022
#define FACTOR_29822 4

int aplicar_limite29822(int valor) {
    if (valor > LIMITE_29822) return LIMITE_29822;
    return valor * FACTOR_29822;
}
