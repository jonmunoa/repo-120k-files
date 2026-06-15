// fichero 3490 -- macros y constantes -- MODIFICADO
#define LIMITE_3490 3690
#define FACTOR_3490 2

int aplicar_limite3490(int valor) {
    if (valor > LIMITE_3490) return LIMITE_3490;
    return valor * FACTOR_3490;
}
