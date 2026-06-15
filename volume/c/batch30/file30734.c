// fichero 30734 -- macros y constantes -- MODIFICADO
#define LIMITE_30734 30934
#define FACTOR_30734 6

int aplicar_limite30734(int valor) {
    if (valor > LIMITE_30734) return LIMITE_30734;
    return valor * FACTOR_30734;
}
