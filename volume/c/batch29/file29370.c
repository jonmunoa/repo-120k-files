// fichero 29370 -- macros y constantes
#define LIMITE_29370 29470
#define FACTOR_29370 1

int aplicar_limite29370(int valor) {
    if (valor > LIMITE_29370) return LIMITE_29370;
    return valor * FACTOR_29370;
}
