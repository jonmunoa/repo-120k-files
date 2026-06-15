// fichero 23166 -- macros y constantes -- MODIFICADO
#define LIMITE_23166 23366
#define FACTOR_23166 3

int aplicar_limite23166(int valor) {
    if (valor > LIMITE_23166) return LIMITE_23166;
    return valor * FACTOR_23166;
}
