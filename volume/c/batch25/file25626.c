// fichero 25626 -- macros y constantes -- MODIFICADO
#define LIMITE_25626 25826
#define FACTOR_25626 3

int aplicar_limite25626(int valor) {
    if (valor > LIMITE_25626) return LIMITE_25626;
    return valor * FACTOR_25626;
}
