// fichero 34370 -- macros y constantes
#define LIMITE_34370 34470
#define FACTOR_34370 1

int aplicar_limite34370(int valor) {
    if (valor > LIMITE_34370) return LIMITE_34370;
    return valor * FACTOR_34370;
}
