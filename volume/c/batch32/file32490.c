// fichero 32490 -- macros y constantes -- MODIFICADO
#define LIMITE_32490 32690
#define FACTOR_32490 2

int aplicar_limite32490(int valor) {
    if (valor > LIMITE_32490) return LIMITE_32490;
    return valor * FACTOR_32490;
}
