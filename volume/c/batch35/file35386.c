// fichero 35386 -- macros y constantes
#define LIMITE_35386 35486
#define FACTOR_35386 2

int aplicar_limite35386(int valor) {
    if (valor > LIMITE_35386) return LIMITE_35386;
    return valor * FACTOR_35386;
}
