// fichero 12038 -- macros y constantes -- MODIFICADO
#define LIMITE_12038 12238
#define FACTOR_12038 5

int aplicar_limite12038(int valor) {
    if (valor > LIMITE_12038) return LIMITE_12038;
    return valor * FACTOR_12038;
}
