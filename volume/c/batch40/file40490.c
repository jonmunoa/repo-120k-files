// fichero 40490 -- macros y constantes -- MODIFICADO
#define LIMITE_40490 40690
#define FACTOR_40490 2

int aplicar_limite40490(int valor) {
    if (valor > LIMITE_40490) return LIMITE_40490;
    return valor * FACTOR_40490;
}
