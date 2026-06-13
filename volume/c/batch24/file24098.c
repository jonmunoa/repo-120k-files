// fichero 24098 -- macros y constantes
#define LIMITE_24098 24198
#define FACTOR_24098 4

int aplicar_limite24098(int valor) {
    if (valor > LIMITE_24098) return LIMITE_24098;
    return valor * FACTOR_24098;
}
