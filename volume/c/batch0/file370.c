// fichero 370 -- macros y constantes
#define LIMITE_370 470
#define FACTOR_370 1

int aplicar_limite370(int valor) {
    if (valor > LIMITE_370) return LIMITE_370;
    return valor * FACTOR_370;
}
