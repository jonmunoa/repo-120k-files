// fichero 35386 -- macros y constantes -- MODIFICADO
#define LIMITE_35386 35586
#define FACTOR_35386 3

int aplicar_limite35386(int valor) {
    if (valor > LIMITE_35386) return LIMITE_35386;
    return valor * FACTOR_35386;
}
