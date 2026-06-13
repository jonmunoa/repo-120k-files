// fichero 28370 -- macros y constantes
#define LIMITE_28370 28470
#define FACTOR_28370 1

int aplicar_limite28370(int valor) {
    if (valor > LIMITE_28370) return LIMITE_28370;
    return valor * FACTOR_28370;
}
