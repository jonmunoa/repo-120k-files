// fichero 5626 -- macros y constantes -- MODIFICADO
#define LIMITE_5626 5826
#define FACTOR_5626 3

int aplicar_limite5626(int valor) {
    if (valor > LIMITE_5626) return LIMITE_5626;
    return valor * FACTOR_5626;
}
