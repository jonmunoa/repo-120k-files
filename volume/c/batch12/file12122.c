// fichero 12122 -- macros y constantes -- MODIFICADO
#define LIMITE_12122 12322
#define FACTOR_12122 4

int aplicar_limite12122(int valor) {
    if (valor > LIMITE_12122) return LIMITE_12122;
    return valor * FACTOR_12122;
}
