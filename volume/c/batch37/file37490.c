// fichero 37490 -- macros y constantes -- MODIFICADO
#define LIMITE_37490 37690
#define FACTOR_37490 2

int aplicar_limite37490(int valor) {
    if (valor > LIMITE_37490) return LIMITE_37490;
    return valor * FACTOR_37490;
}
