// fichero 30366 -- macros y constantes -- MODIFICADO
#define LIMITE_30366 30566
#define FACTOR_30366 3

int aplicar_limite30366(int valor) {
    if (valor > LIMITE_30366) return LIMITE_30366;
    return valor * FACTOR_30366;
}
