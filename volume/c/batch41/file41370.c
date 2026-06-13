// fichero 41370 -- macros y constantes
#define LIMITE_41370 41470
#define FACTOR_41370 1

int aplicar_limite41370(int valor) {
    if (valor > LIMITE_41370) return LIMITE_41370;
    return valor * FACTOR_41370;
}
