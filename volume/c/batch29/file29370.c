// fichero 29370 -- macros y constantes -- MODIFICADO
#define LIMITE_29370 29570
#define FACTOR_29370 2

int aplicar_limite29370(int valor) {
    if (valor > LIMITE_29370) return LIMITE_29370;
    return valor * FACTOR_29370;
}
