// fichero 26678 -- macros y constantes -- MODIFICADO
#define LIMITE_26678 26878
#define FACTOR_26678 5

int aplicar_limite26678(int valor) {
    if (valor > LIMITE_26678) return LIMITE_26678;
    return valor * FACTOR_26678;
}
