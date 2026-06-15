// fichero 20342 -- macros y constantes -- MODIFICADO
#define LIMITE_20342 20542
#define FACTOR_20342 4

int aplicar_limite20342(int valor) {
    if (valor > LIMITE_20342) return LIMITE_20342;
    return valor * FACTOR_20342;
}
