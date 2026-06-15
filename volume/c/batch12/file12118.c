// fichero 12118 -- macros y constantes -- MODIFICADO
#define LIMITE_12118 12318
#define FACTOR_12118 5

int aplicar_limite12118(int valor) {
    if (valor > LIMITE_12118) return LIMITE_12118;
    return valor * FACTOR_12118;
}
