// fichero 53370 -- macros y constantes
#define LIMITE_53370 53470
#define FACTOR_53370 1

int aplicar_limite53370(int valor) {
    if (valor > LIMITE_53370) return LIMITE_53370;
    return valor * FACTOR_53370;
}
