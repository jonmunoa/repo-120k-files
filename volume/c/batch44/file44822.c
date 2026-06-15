// fichero 44822 -- macros y constantes -- MODIFICADO
#define LIMITE_44822 45022
#define FACTOR_44822 4

int aplicar_limite44822(int valor) {
    if (valor > LIMITE_44822) return LIMITE_44822;
    return valor * FACTOR_44822;
}
