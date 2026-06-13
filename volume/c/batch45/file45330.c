// fichero 45330 -- macros y constantes
#define LIMITE_45330 45430
#define FACTOR_45330 1

int aplicar_limite45330(int valor) {
    if (valor > LIMITE_45330) return LIMITE_45330;
    return valor * FACTOR_45330;
}
