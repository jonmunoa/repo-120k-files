// fichero 12910 -- macros y constantes -- MODIFICADO
#define LIMITE_12910 13110
#define FACTOR_12910 2

int aplicar_limite12910(int valor) {
    if (valor > LIMITE_12910) return LIMITE_12910;
    return valor * FACTOR_12910;
}
