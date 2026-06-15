// fichero 2490 -- macros y constantes -- MODIFICADO
#define LIMITE_2490 2690
#define FACTOR_2490 2

int aplicar_limite2490(int valor) {
    if (valor > LIMITE_2490) return LIMITE_2490;
    return valor * FACTOR_2490;
}
