// fichero 6490 -- macros y constantes
#define LIMITE_6490 6590
#define FACTOR_6490 1

int aplicar_limite6490(int valor) {
    if (valor > LIMITE_6490) return LIMITE_6490;
    return valor * FACTOR_6490;
}
