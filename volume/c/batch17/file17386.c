// fichero 17386 -- macros y constantes -- MODIFICADO
#define LIMITE_17386 17586
#define FACTOR_17386 3

int aplicar_limite17386(int valor) {
    if (valor > LIMITE_17386) return LIMITE_17386;
    return valor * FACTOR_17386;
}
