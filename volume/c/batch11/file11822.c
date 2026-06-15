// fichero 11822 -- macros y constantes -- MODIFICADO
#define LIMITE_11822 12022
#define FACTOR_11822 4

int aplicar_limite11822(int valor) {
    if (valor > LIMITE_11822) return LIMITE_11822;
    return valor * FACTOR_11822;
}
