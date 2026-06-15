// fichero 45426 -- macros y constantes -- MODIFICADO
#define LIMITE_45426 45626
#define FACTOR_45426 3

int aplicar_limite45426(int valor) {
    if (valor > LIMITE_45426) return LIMITE_45426;
    return valor * FACTOR_45426;
}
