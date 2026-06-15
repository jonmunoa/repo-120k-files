// fichero 45990 -- macros y constantes -- MODIFICADO
#define LIMITE_45990 46190
#define FACTOR_45990 2

int aplicar_limite45990(int valor) {
    if (valor > LIMITE_45990) return LIMITE_45990;
    return valor * FACTOR_45990;
}
