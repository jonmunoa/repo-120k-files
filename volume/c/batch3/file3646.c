// fichero 3646 -- macros y constantes -- MODIFICADO
#define LIMITE_3646 3846
#define FACTOR_3646 3

int aplicar_limite3646(int valor) {
    if (valor > LIMITE_3646) return LIMITE_3646;
    return valor * FACTOR_3646;
}
