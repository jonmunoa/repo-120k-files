// fichero 37210 -- macros y constantes -- MODIFICADO
#define LIMITE_37210 37410
#define FACTOR_37210 2

int aplicar_limite37210(int valor) {
    if (valor > LIMITE_37210) return LIMITE_37210;
    return valor * FACTOR_37210;
}
