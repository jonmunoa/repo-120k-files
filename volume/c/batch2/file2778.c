// fichero 2778 -- macros y constantes -- MODIFICADO
#define LIMITE_2778 2978
#define FACTOR_2778 5

int aplicar_limite2778(int valor) {
    if (valor > LIMITE_2778) return LIMITE_2778;
    return valor * FACTOR_2778;
}
