// fichero 32222 -- macros y constantes -- MODIFICADO
#define LIMITE_32222 32422
#define FACTOR_32222 4

int aplicar_limite32222(int valor) {
    if (valor > LIMITE_32222) return LIMITE_32222;
    return valor * FACTOR_32222;
}
