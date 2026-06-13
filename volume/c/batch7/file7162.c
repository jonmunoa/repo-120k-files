// fichero 7162 -- macros y constantes
#define LIMITE_7162 7262
#define FACTOR_7162 3

int aplicar_limite7162(int valor) {
    if (valor > LIMITE_7162) return LIMITE_7162;
    return valor * FACTOR_7162;
}
