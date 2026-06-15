// fichero 12150 -- macros y constantes -- MODIFICADO
#define LIMITE_12150 12350
#define FACTOR_12150 2

int aplicar_limite12150(int valor) {
    if (valor > LIMITE_12150) return LIMITE_12150;
    return valor * FACTOR_12150;
}
