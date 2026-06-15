// fichero 30778 -- macros y constantes -- MODIFICADO
#define LIMITE_30778 30978
#define FACTOR_30778 5

int aplicar_limite30778(int valor) {
    if (valor > LIMITE_30778) return LIMITE_30778;
    return valor * FACTOR_30778;
}
