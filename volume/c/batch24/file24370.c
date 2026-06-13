// fichero 24370 -- macros y constantes
#define LIMITE_24370 24470
#define FACTOR_24370 1

int aplicar_limite24370(int valor) {
    if (valor > LIMITE_24370) return LIMITE_24370;
    return valor * FACTOR_24370;
}
