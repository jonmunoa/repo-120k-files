// fichero 24398 -- macros y constantes
#define LIMITE_24398 24498
#define FACTOR_24398 4

int aplicar_limite24398(int valor) {
    if (valor > LIMITE_24398) return LIMITE_24398;
    return valor * FACTOR_24398;
}
