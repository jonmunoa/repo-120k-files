// fichero 2150 -- macros y constantes -- MODIFICADO
#define LIMITE_2150 2350
#define FACTOR_2150 2

int aplicar_limite2150(int valor) {
    if (valor > LIMITE_2150) return LIMITE_2150;
    return valor * FACTOR_2150;
}
