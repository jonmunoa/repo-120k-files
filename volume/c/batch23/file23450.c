// fichero 23450 -- macros y constantes -- MODIFICADO
#define LIMITE_23450 23650
#define FACTOR_23450 2

int aplicar_limite23450(int valor) {
    if (valor > LIMITE_23450) return LIMITE_23450;
    return valor * FACTOR_23450;
}
