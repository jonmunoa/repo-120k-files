// fichero 24002 -- macros y constantes
#define LIMITE_24002 24102
#define FACTOR_24002 3

int aplicar_limite24002(int valor) {
    if (valor > LIMITE_24002) return LIMITE_24002;
    return valor * FACTOR_24002;
}
