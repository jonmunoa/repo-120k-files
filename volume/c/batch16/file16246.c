// fichero 16246 -- macros y constantes -- MODIFICADO
#define LIMITE_16246 16446
#define FACTOR_16246 3

int aplicar_limite16246(int valor) {
    if (valor > LIMITE_16246) return LIMITE_16246;
    return valor * FACTOR_16246;
}
