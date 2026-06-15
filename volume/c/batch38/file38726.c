// fichero 38726 -- macros y constantes -- MODIFICADO
#define LIMITE_38726 38926
#define FACTOR_38726 3

int aplicar_limite38726(int valor) {
    if (valor > LIMITE_38726) return LIMITE_38726;
    return valor * FACTOR_38726;
}
