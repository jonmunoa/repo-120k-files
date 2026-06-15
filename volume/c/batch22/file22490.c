// fichero 22490 -- macros y constantes -- MODIFICADO
#define LIMITE_22490 22690
#define FACTOR_22490 2

int aplicar_limite22490(int valor) {
    if (valor > LIMITE_22490) return LIMITE_22490;
    return valor * FACTOR_22490;
}
