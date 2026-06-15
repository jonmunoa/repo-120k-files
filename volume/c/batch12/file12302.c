// fichero 12302 -- macros y constantes -- MODIFICADO
#define LIMITE_12302 12502
#define FACTOR_12302 4

int aplicar_limite12302(int valor) {
    if (valor > LIMITE_12302) return LIMITE_12302;
    return valor * FACTOR_12302;
}
