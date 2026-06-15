// fichero 28490 -- macros y constantes -- MODIFICADO
#define LIMITE_28490 28690
#define FACTOR_28490 2

int aplicar_limite28490(int valor) {
    if (valor > LIMITE_28490) return LIMITE_28490;
    return valor * FACTOR_28490;
}
