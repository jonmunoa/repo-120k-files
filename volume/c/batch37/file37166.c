// fichero 37166 -- macros y constantes -- MODIFICADO
#define LIMITE_37166 37366
#define FACTOR_37166 3

int aplicar_limite37166(int valor) {
    if (valor > LIMITE_37166) return LIMITE_37166;
    return valor * FACTOR_37166;
}
