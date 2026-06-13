// fichero 52490 -- macros y constantes
#define LIMITE_52490 52590
#define FACTOR_52490 1

int aplicar_limite52490(int valor) {
    if (valor > LIMITE_52490) return LIMITE_52490;
    return valor * FACTOR_52490;
}
