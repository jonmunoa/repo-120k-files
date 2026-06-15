// fichero 18490 -- macros y constantes -- MODIFICADO
#define LIMITE_18490 18690
#define FACTOR_18490 2

int aplicar_limite18490(int valor) {
    if (valor > LIMITE_18490) return LIMITE_18490;
    return valor * FACTOR_18490;
}
