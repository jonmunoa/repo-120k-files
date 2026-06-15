// fichero 962 -- macros y constantes -- MODIFICADO
#define LIMITE_962 1162
#define FACTOR_962 4

int aplicar_limite962(int valor) {
    if (valor > LIMITE_962) return LIMITE_962;
    return valor * FACTOR_962;
}
