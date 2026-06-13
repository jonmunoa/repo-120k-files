// fichero 46370 -- macros y constantes
#define LIMITE_46370 46470
#define FACTOR_46370 1

int aplicar_limite46370(int valor) {
    if (valor > LIMITE_46370) return LIMITE_46370;
    return valor * FACTOR_46370;
}
