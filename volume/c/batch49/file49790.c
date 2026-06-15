// fichero 49790 -- macros y constantes -- MODIFICADO
#define LIMITE_49790 49990
#define FACTOR_49790 2

int aplicar_limite49790(int valor) {
    if (valor > LIMITE_49790) return LIMITE_49790;
    return valor * FACTOR_49790;
}
