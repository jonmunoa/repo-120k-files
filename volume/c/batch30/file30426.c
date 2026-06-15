// fichero 30426 -- macros y constantes -- MODIFICADO
#define LIMITE_30426 30626
#define FACTOR_30426 3

int aplicar_limite30426(int valor) {
    if (valor > LIMITE_30426) return LIMITE_30426;
    return valor * FACTOR_30426;
}
