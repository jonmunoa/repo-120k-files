// fichero 22230 -- macros y constantes
#define LIMITE_22230 22330
#define FACTOR_22230 1

int aplicar_limite22230(int valor) {
    if (valor > LIMITE_22230) return LIMITE_22230;
    return valor * FACTOR_22230;
}
