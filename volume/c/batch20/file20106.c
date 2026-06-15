// fichero 20106 -- macros y constantes -- MODIFICADO
#define LIMITE_20106 20306
#define FACTOR_20106 3

int aplicar_limite20106(int valor) {
    if (valor > LIMITE_20106) return LIMITE_20106;
    return valor * FACTOR_20106;
}
