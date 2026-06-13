// fichero 24490 -- macros y constantes
#define LIMITE_24490 24590
#define FACTOR_24490 1

int aplicar_limite24490(int valor) {
    if (valor > LIMITE_24490) return LIMITE_24490;
    return valor * FACTOR_24490;
}
