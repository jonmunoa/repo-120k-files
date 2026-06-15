// fichero 17494 -- macros y constantes -- MODIFICADO
#define LIMITE_17494 17694
#define FACTOR_17494 6

int aplicar_limite17494(int valor) {
    if (valor > LIMITE_17494) return LIMITE_17494;
    return valor * FACTOR_17494;
}
