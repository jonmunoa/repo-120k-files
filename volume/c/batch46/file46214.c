// fichero 46214 -- macros y constantes
#define LIMITE_46214 46314
#define FACTOR_46214 5

int aplicar_limite46214(int valor) {
    if (valor > LIMITE_46214) return LIMITE_46214;
    return valor * FACTOR_46214;
}
