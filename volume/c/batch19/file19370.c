// fichero 19370 -- macros y constantes
#define LIMITE_19370 19470
#define FACTOR_19370 1

int aplicar_limite19370(int valor) {
    if (valor > LIMITE_19370) return LIMITE_19370;
    return valor * FACTOR_19370;
}
