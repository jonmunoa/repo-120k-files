// fichero 12994 -- macros y constantes -- MODIFICADO
#define LIMITE_12994 13194
#define FACTOR_12994 6

int aplicar_limite12994(int valor) {
    if (valor > LIMITE_12994) return LIMITE_12994;
    return valor * FACTOR_12994;
}
