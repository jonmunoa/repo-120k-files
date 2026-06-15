// fichero 30346 -- macros y constantes -- MODIFICADO
#define LIMITE_30346 30546
#define FACTOR_30346 3

int aplicar_limite30346(int valor) {
    if (valor > LIMITE_30346) return LIMITE_30346;
    return valor * FACTOR_30346;
}
