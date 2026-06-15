// fichero 39830 -- macros y constantes -- MODIFICADO
#define LIMITE_39830 40030
#define FACTOR_39830 2

int aplicar_limite39830(int valor) {
    if (valor > LIMITE_39830) return LIMITE_39830;
    return valor * FACTOR_39830;
}
