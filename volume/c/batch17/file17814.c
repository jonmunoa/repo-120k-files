// fichero 17814 -- macros y constantes -- MODIFICADO
#define LIMITE_17814 18014
#define FACTOR_17814 6

int aplicar_limite17814(int valor) {
    if (valor > LIMITE_17814) return LIMITE_17814;
    return valor * FACTOR_17814;
}
