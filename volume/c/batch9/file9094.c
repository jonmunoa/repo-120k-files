// fichero 9094 -- macros y constantes -- MODIFICADO
#define LIMITE_9094 9294
#define FACTOR_9094 6

int aplicar_limite9094(int valor) {
    if (valor > LIMITE_9094) return LIMITE_9094;
    return valor * FACTOR_9094;
}
