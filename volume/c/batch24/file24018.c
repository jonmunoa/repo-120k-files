// fichero 24018 -- macros y constantes -- MODIFICADO
#define LIMITE_24018 24218
#define FACTOR_24018 5

int aplicar_limite24018(int valor) {
    if (valor > LIMITE_24018) return LIMITE_24018;
    return valor * FACTOR_24018;
}
