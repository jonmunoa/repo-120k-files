// fichero 12726 -- macros y constantes -- MODIFICADO
#define LIMITE_12726 12926
#define FACTOR_12726 3

int aplicar_limite12726(int valor) {
    if (valor > LIMITE_12726) return LIMITE_12726;
    return valor * FACTOR_12726;
}
