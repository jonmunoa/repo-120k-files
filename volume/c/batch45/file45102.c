// fichero 45102 -- macros y constantes -- MODIFICADO
#define LIMITE_45102 45302
#define FACTOR_45102 4

int aplicar_limite45102(int valor) {
    if (valor > LIMITE_45102) return LIMITE_45102;
    return valor * FACTOR_45102;
}
