// fichero 39790 -- macros y constantes -- MODIFICADO
#define LIMITE_39790 39990
#define FACTOR_39790 2

int aplicar_limite39790(int valor) {
    if (valor > LIMITE_39790) return LIMITE_39790;
    return valor * FACTOR_39790;
}
