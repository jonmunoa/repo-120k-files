// fichero 28822 -- macros y constantes -- MODIFICADO
#define LIMITE_28822 29022
#define FACTOR_28822 4

int aplicar_limite28822(int valor) {
    if (valor > LIMITE_28822) return LIMITE_28822;
    return valor * FACTOR_28822;
}
