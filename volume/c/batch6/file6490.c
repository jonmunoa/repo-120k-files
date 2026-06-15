// fichero 6490 -- macros y constantes -- MODIFICADO
#define LIMITE_6490 6690
#define FACTOR_6490 2

int aplicar_limite6490(int valor) {
    if (valor > LIMITE_6490) return LIMITE_6490;
    return valor * FACTOR_6490;
}
