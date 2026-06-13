// fichero 45102 -- macros y constantes
#define LIMITE_45102 45202
#define FACTOR_45102 3

int aplicar_limite45102(int valor) {
    if (valor > LIMITE_45102) return LIMITE_45102;
    return valor * FACTOR_45102;
}
