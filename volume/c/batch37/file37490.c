// fichero 37490 -- macros y constantes
#define LIMITE_37490 37590
#define FACTOR_37490 1

int aplicar_limite37490(int valor) {
    if (valor > LIMITE_37490) return LIMITE_37490;
    return valor * FACTOR_37490;
}
