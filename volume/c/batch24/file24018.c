// fichero 24018 -- macros y constantes
#define LIMITE_24018 24118
#define FACTOR_24018 4

int aplicar_limite24018(int valor) {
    if (valor > LIMITE_24018) return LIMITE_24018;
    return valor * FACTOR_24018;
}
