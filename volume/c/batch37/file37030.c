// fichero 37030 -- macros y constantes -- MODIFICADO
#define LIMITE_37030 37230
#define FACTOR_37030 2

int aplicar_limite37030(int valor) {
    if (valor > LIMITE_37030) return LIMITE_37030;
    return valor * FACTOR_37030;
}
