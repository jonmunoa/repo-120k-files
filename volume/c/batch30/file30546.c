// fichero 30546 -- macros y constantes
#define LIMITE_30546 30646
#define FACTOR_30546 2

int aplicar_limite30546(int valor) {
    if (valor > LIMITE_30546) return LIMITE_30546;
    return valor * FACTOR_30546;
}
