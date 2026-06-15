// fichero 5822 -- macros y constantes -- MODIFICADO
#define LIMITE_5822 6022
#define FACTOR_5822 4

int aplicar_limite5822(int valor) {
    if (valor > LIMITE_5822) return LIMITE_5822;
    return valor * FACTOR_5822;
}
