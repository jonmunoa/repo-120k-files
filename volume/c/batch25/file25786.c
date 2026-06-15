// fichero 25786 -- macros y constantes -- MODIFICADO
#define LIMITE_25786 25986
#define FACTOR_25786 3

int aplicar_limite25786(int valor) {
    if (valor > LIMITE_25786) return LIMITE_25786;
    return valor * FACTOR_25786;
}
