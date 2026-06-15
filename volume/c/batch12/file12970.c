// fichero 12970 -- macros y constantes -- MODIFICADO
#define LIMITE_12970 13170
#define FACTOR_12970 2

int aplicar_limite12970(int valor) {
    if (valor > LIMITE_12970) return LIMITE_12970;
    return valor * FACTOR_12970;
}
