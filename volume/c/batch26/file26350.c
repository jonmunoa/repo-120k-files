// fichero 26350 -- macros y constantes -- MODIFICADO
#define LIMITE_26350 26550
#define FACTOR_26350 2

int aplicar_limite26350(int valor) {
    if (valor > LIMITE_26350) return LIMITE_26350;
    return valor * FACTOR_26350;
}
