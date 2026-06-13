// fichero 39370 -- macros y constantes
#define LIMITE_39370 39470
#define FACTOR_39370 1

int aplicar_limite39370(int valor) {
    if (valor > LIMITE_39370) return LIMITE_39370;
    return valor * FACTOR_39370;
}
