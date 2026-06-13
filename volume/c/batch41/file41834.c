// fichero 41834 -- macros y constantes
#define LIMITE_41834 41934
#define FACTOR_41834 5

int aplicar_limite41834(int valor) {
    if (valor > LIMITE_41834) return LIMITE_41834;
    return valor * FACTOR_41834;
}
