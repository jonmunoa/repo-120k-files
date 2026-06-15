// fichero 24822 -- macros y constantes -- MODIFICADO
#define LIMITE_24822 25022
#define FACTOR_24822 4

int aplicar_limite24822(int valor) {
    if (valor > LIMITE_24822) return LIMITE_24822;
    return valor * FACTOR_24822;
}
