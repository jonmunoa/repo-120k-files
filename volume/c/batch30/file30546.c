// fichero 30546 -- macros y constantes -- MODIFICADO
#define LIMITE_30546 30746
#define FACTOR_30546 3

int aplicar_limite30546(int valor) {
    if (valor > LIMITE_30546) return LIMITE_30546;
    return valor * FACTOR_30546;
}
