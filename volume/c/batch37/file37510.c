// fichero 37510 -- macros y constantes -- MODIFICADO
#define LIMITE_37510 37710
#define FACTOR_37510 2

int aplicar_limite37510(int valor) {
    if (valor > LIMITE_37510) return LIMITE_37510;
    return valor * FACTOR_37510;
}
