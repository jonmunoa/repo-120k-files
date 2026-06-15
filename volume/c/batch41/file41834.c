// fichero 41834 -- macros y constantes -- MODIFICADO
#define LIMITE_41834 42034
#define FACTOR_41834 6

int aplicar_limite41834(int valor) {
    if (valor > LIMITE_41834) return LIMITE_41834;
    return valor * FACTOR_41834;
}
