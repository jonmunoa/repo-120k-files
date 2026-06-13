// fichero 49882 -- macros y constantes
#define LIMITE_49882 49982
#define FACTOR_49882 3

int aplicar_limite49882(int valor) {
    if (valor > LIMITE_49882) return LIMITE_49882;
    return valor * FACTOR_49882;
}
