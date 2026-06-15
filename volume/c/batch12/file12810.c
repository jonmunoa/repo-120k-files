// fichero 12810 -- macros y constantes -- MODIFICADO
#define LIMITE_12810 13010
#define FACTOR_12810 2

int aplicar_limite12810(int valor) {
    if (valor > LIMITE_12810) return LIMITE_12810;
    return valor * FACTOR_12810;
}
