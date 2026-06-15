// fichero 30790 -- macros y constantes -- MODIFICADO
#define LIMITE_30790 30990
#define FACTOR_30790 2

int aplicar_limite30790(int valor) {
    if (valor > LIMITE_30790) return LIMITE_30790;
    return valor * FACTOR_30790;
}
