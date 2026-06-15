// fichero 48490 -- macros y constantes -- MODIFICADO
#define LIMITE_48490 48690
#define FACTOR_48490 2

int aplicar_limite48490(int valor) {
    if (valor > LIMITE_48490) return LIMITE_48490;
    return valor * FACTOR_48490;
}
