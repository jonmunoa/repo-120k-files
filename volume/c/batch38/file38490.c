// fichero 38490 -- macros y constantes -- MODIFICADO
#define LIMITE_38490 38690
#define FACTOR_38490 2

int aplicar_limite38490(int valor) {
    if (valor > LIMITE_38490) return LIMITE_38490;
    return valor * FACTOR_38490;
}
