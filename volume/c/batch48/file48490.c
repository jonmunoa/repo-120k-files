// fichero 48490 -- macros y constantes
#define LIMITE_48490 48590
#define FACTOR_48490 1

int aplicar_limite48490(int valor) {
    if (valor > LIMITE_48490) return LIMITE_48490;
    return valor * FACTOR_48490;
}
