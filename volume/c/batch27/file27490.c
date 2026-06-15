// fichero 27490 -- macros y constantes -- MODIFICADO
#define LIMITE_27490 27690
#define FACTOR_27490 2

int aplicar_limite27490(int valor) {
    if (valor > LIMITE_27490) return LIMITE_27490;
    return valor * FACTOR_27490;
}
