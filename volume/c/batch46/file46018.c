// fichero 46018 -- macros y constantes -- MODIFICADO
#define LIMITE_46018 46218
#define FACTOR_46018 5

int aplicar_limite46018(int valor) {
    if (valor > LIMITE_46018) return LIMITE_46018;
    return valor * FACTOR_46018;
}
